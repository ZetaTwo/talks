Here is the transcript of the presentation **"Reverse Engineering Age of Empires II: Upgrading Your Tools from Dark Age to Castle Age"** by Carl (zeta2).

***

**Speaker:** Carl (zeta2)
**Topic:** Reverse Engineering Age of Empires II: Definitive Edition

**(00:05)** Hello everyone, and welcome to this presentation: *Reverse Engineering Age of Empires 2: Upgrading Your Tools from Dark Age to Castle Age*. My name is Carl, and I will take you through this journey of reverse engineering this old game.

**(00:23)** Before we get into it, just, you know, I'm not affiliated with Microsoft or any of these game studios. I've just done this as a side project for fun and for learning things.

**(00:38)** With that out of the way, as I said, my name is Carl, sometimes better known as zeta2. I'm 34 years old, originally from Sweden, currently living in London. I work as a Security Engineer in finance. In my free time, I've done a lot of CTFs, both organizing and playing. I’ve also done some blog posts, had a YouTube channel, I write a bit for Phrack... various security-related things.

**(01:07)** But anyway, enough about me. Let's get into the topic. We're going to talk about *Age of Empires II*. This is a Real-Time Strategy (RTS) PC game that was released in 1999 as a sequel to *Age of Empires*. It was created by Ensemble Studios and published by Microsoft. Then there was an HD remake in 2013, and finally, the Definitive Edition that came out in 2019. This is the version I will be talking about. They are all based on the same codebase, but it has undergone several changes throughout the years.

### Dark Age: Manual Exploration

**(01:48)** All right, so we start in the Dark Age with a little bit of manual exploration of the game. When I just wanted to get into this, I grabbed the game binary. It’s a Windows PE executable. I just started doing some initial recon. It's like an 80-megabyte binary. If we check, there are a bunch of game-related strings readily available in the binary, so we're not completely out of luck.

**(02:24)** But if we run `binwalk` with the `-E` parameter (this is a feature in Binwalk to generate an entropy graph of the file), we get something like this. As you can see, the majority of the file has very high entropy. This suggests that the binary is either compressed or encrypted. So we're probably going to have to deal with this very early in our exploration.

**(02:58)** Looking a bit further, we can open this in Binary Ninja and take a look at the sections of the binary. We see kind of all of our standard `.text` and `.data` sections, but we also see a `.text2` section, which will be very relevant in the exploration of this.

**(03:20)** It turns out, if we look into this a little bit, that the binary is, in fact, encrypted. When I started doing this, I just wanted to get some kind of reference material—something to go on, something to guide me in the process. So what I did was I ran the game, attached a debugger to it, and just dumped out the binary from memory. This indeed gets you the decrypted binary.

**(03:54)** This tells us that the scheme they are using for the encryption is probably something along the lines of: at startup, we decrypt the whole thing, and then we continue the execution. So, with this, we have an encrypted binary, and we have the decrypted version of the binary that’s loaded into memory. There are ways in which you can restore this back into an executable PE file, but it's an annoying process, so I just used this as a manual reference.

**(04:39)** Our first point of order here is to analyze this decryption algorithm. If we look at the entry point of the program, there is a jump instruction. If we follow this, we eventually get to some obfuscation. It is pushing a whole bunch of stuff to the stack, then it's actually 16-byte aligning the stack. It calls a function, and then it undoes all of this. This suggests to me that this obfuscation is done on a binary-to-binary level because the obfuscation seemingly does not know what registers need to be preserved or not, so it just saves basically all of them.

**(05:50)** We see that this is then done again later in the function. We are calling two different functions. The first one is basically a function to go over the different memory pages of the code sections and make them writable. The second one actually decrypts the code.

**(06:12)** So, how does this work? If you look at this, an AES-based decryption is performed. Presumably with some hardcoded key, so we need to find where this key is located. Another thing to keep in mind is that this binary has relocations. If you think about it, this is kind of in conflict with this encryption scheme. If you apply the relocations on the encrypted code, this will break when you decrypt it. So we need to look at what goes on there as well.

**(07:01)** It turns out that they handle the relocation part in a kind of funny way. Basically, they have this giant table of where all the relocations are. It will skip all of those places when doing the decryption. So basically, all the locations in memory affected by relocations are *not* encrypted, and everything else *is* encrypted. It stores these using variable-length encoded integers in a table. It will go through this table, collect all the bits that are encrypted, concatenate this into a big ciphertext, validate the integrity of this using a hash, and then—once that passes—it will decrypt this using AES-ECB using a hardcoded key. Then it uses the same table again to put the data back in the correct places.

**(08:05)** Also, because it's just AES-ECB, the length needs to be a multiple of the block size. So the last part of the last block is just stored hardcoded in a separate location and just appended to the ciphertext before decrypting. I thought that was a kind of funny way they solved that.

**(08:35)** Through this, I actually realized that if you do a stream cipher instead... in theory, you could do something that would be compatible with relocations if you used addition instead of XOR with your stream cipher. I think in practice it doesn't really work with how relocations work in Windows, but at least in theory, it could have been made possible.

### Feudal Age: Automation

**(09:05)** Anyway, as part of this work to help me see what I was doing, I started doing some very basic scripting in Binary Ninja. The first part I did was translate—I took the encrypted binary but transplanted the decrypted `.text` sections from my memory dump and copied them back into the encrypted text using a Python library called LIEF (or Leaf), which is a very nice library for manipulating executable files. This was to get a reference binary for when we later want to do the actual decryption of this binary.

**(09:54)** As part of this, remember I mentioned that there is a `.text2` section? They actually have some code located in this section as well. For this to work, they need a copy of the GOT (Global Offset Table) there as well. As part of this decryption scheme, they also copy the GOT. So I created a small script to do a similar thing. It basically copies a bunch of data around using the Binary Ninja API.

**(10:30)** This is the entropy again of the decrypted binary. What you can notice is that now we have a much lower entropy overall in the binary, *except* there is a section at the end which corresponds to the location of this `.text2` section where we still have high entropy. It turns out that there are actually two layers of encryption. There is this big AES-based encryption scheme, and then for this section, they are also using T (Tiny Encryption Algorithm) to do some further decryption.

**(11:37)** Anyway, I think we are now ready to advance and go up to the Feudal Age and see how we can do this decryption process a little bit better and start to do some automation around here.

**(11:53)** One thing I wanted throughout this project... I mean, they are still releasing patches to this game and updates. I didn't want to just manually work on one version of the game. I want to port this work over to the next version and so on. So I wanted to do this decryption automatically. And one part of this is to find these decryption parts.

**(12:21)** We can create a little script. When you do this manually, you see the decryption code and understand by looking at it: "Okay, this is the function call to the decryption, here is the second argument which is the key," and so on. Now we need to describe this in a way that is consistent and can be used to traverse the IL (Intermediate Language).

**(12:45)** For example, as part of this decryption code, we have a part where the function call at instruction 6 is the setup of the AES object. The second argument here is actually the AES key. So I created a piece of Binary Ninja script to try to locate this function call. The general approach I used is doing a "sieve" kind of thing, where I loop over all instructions. If they don't match the properties I'm looking for, I skip over them.

**(13:30)** In this case, we're looking for a call instruction with three arguments. The last argument should be a constant of a certain value, and the second argument should be a pointer. Then we grab that to get the location of the AES key. We can do a similar thing for all the different parameters.

**(13:54)** We get these various properties or attributes of the binary:
*   The virtual address of the AES key.
*   The suffix snippet of the ciphertext and its length.
*   The decryption table (to skip relocations).
*   The hash to check the integrity of the ciphertext.
*   Various marker values they use to not accidentally do the decryption twice.

**(14:30)** Using this, we can use a Binary Ninja script to grab all these properties. Then we can give them to another Python script using LIEF to actually perform the decryption. So, running this script on one of these AOE binaries, we get a couple of values extracted. That's pretty nice. We can then take those values into our decryption binary.

**(15:00)** We see here that we're looking at this table, seeing that we are validating the ciphertext hash correctly. By the way, it's really nice that they have this integrity check in the binary because this means that I can be sure that up to this point, I'm doing the correct thing. And then we can decrypt this file.

**(15:30)** I wanted to make sure that this works for *every* version of the game. Very luckily, this game is published on Steam. A nice thing with the Steam CDN is that you can actually download the files for every single version of the game that has been released. So I used this project called **Steam Depot Downloader** and basically downloaded every single version of *Age of Empires II: Definitive Edition* that has been published on Steam. This gave me, I think, 50 or 60 different binaries that I can test this on.

**(16:15)** Actually, a fun thing here is that just as I was putting this script together a couple of months ago, it turns out that the very latest patch at the time... the developers had accidentally included a completely unobfuscated, unencrypted version of the binary! So I grabbed that one as well, which is very nice because now I have a really solid reference for any future decryption work on that specific version of the game.

**(16:43)** So, running this, I was able to test my decryption of every single version of the game. In fact, it worked on 80 of the binaries and failed for 16 of them. I think initially there were a few more that didn't work. I found out, for example, that in an earlier version of this obfuscation, that initial jump from the start was actually a *call* instead, so I had to tweak the parameter finding a little bit. I'm still working to get this down to a 100% success rate.

**(17:23)** Using all of these attributes, we can decrypt it. We see that there are yet a couple of failures there, so this is still a work in progress to have a CI pipeline for decrypting all of these binaries.

### Castle Age: Deobfuscation and BNIL

**(17:40)** All right, so how can we take this further? Let's go to the Castle Age and look at the actual obfuscation and this BNIL query system I built.

**(17:50)** Basically, after having done all this decryption stuff, I started looking at the decrypted code. It turns out that there is more obfuscation going on here. This obfuscation is local transformations of instructions. It's a fairly primitive type of code obfuscation.

**(18:24)** To handle this, what I wanted to do was build a kind of search-and-replace system. I wanted to search for patterns of code and replace them with other instructions. For this, I took a little bit of inspiration from the **BNIL Graph Viewer** by Ryan, which is a very nice way to visualize the IL. I realized that it was kind of creating a graph structure of these IL instructions.

**(18:57)** I also took inspiration from a tool called **Veggies** created by Felix (formerly at Google). It's a query system for C code, specifically for vulnerability research. There had been attempts to extend this and use this with Binary Ninja, but in the end, I decided that—since I'm not doing this for vulnerability research and there were features I didn't need—I wanted to simplify this a bit.

**(19:28)** Basically, I created a plugin which generates a Lisp-like serialization of the Binary Ninja Intermediate Language. Then we can parse this with a **Tree-sitter** syntax and use the Tree-sitter query language to query on these patterns.

**(19:55)** Let's start with what we're looking at. The obfuscated code could be something like this: Let's say they want to push a constant to the stack. Normally, you would just `PUSH` your immediate value. But they might do something like:
1.  Take one register and write it to the current top of the stack.
2.  Write the value that we want into that register.
3.  Do an `EXCHANGE` (XCHG) with the top of the stack.
4.  Decrease the stack pointer.

**(20:41)** So with this query system I have done, you can write these types of Tree-sitter queries. It's a little bit verbose, and if I were to develop this further, the next step would probably be to create a simpler query language on top of this where you could express various types of shorthands. But this was a very good start.

**(21:13)** Basically here, what I'm saying is that I want an instruction—and it should be a `STORE` instruction. The destination should be a register (which we will call `RSP1`), and the source should be another register (`REG A1`). Then you see I define the rest of the pattern here. I also define some relationships. I'm basically saying that whenever I'm referring to `REG A`, they should all be the same register. And whenever I refer to `RSP1` or `RSP2`, that should have the value of the stack pointer (`RSP`). This is the way we can link together the different statements.

**(22:00)** Using this, I was then able to write a Binary Ninja workflow to do BNIL modifications. In a workflow plugin in Binary Ninja, you can modify the IL as it is passing through the pipeline of being lifted from low-level to high-level.

**(22:24)** Basically, what I did was: have these various queries, fetch the instruction numbers for these, replace them with a `NOP` instruction, and then finally, at the last instruction, we put the de-obfuscated function. Because there might be some kind of nesting here, we just repeat this until we no longer match on anything that we're searching for.

**(22:50)** For example, in one place, the initial code looked something like this. This is the disassembly of a piece of obfuscated code. And then if we look at the Low-Level IL (LLIL) without any plugins, it looks like this. It is quite difficult to read. Once we apply this type of de-obfuscation, it is transformed into something like this. It is definitely getting more readable. You can clearly see the various PUSH operations here, for example, which were not clear at all previously.

**(23:40)** Here is a second example. We have some disassembly here; it's not super easy to follow what's going on. Here is the corresponding Low-Level IL. Basically, when we serialize this to my custom representation of the BNIL, we get something like this. Now, this is not super readable for humans, but it's also not really meant to be read by humans. This is mostly just to transfer the BNIL stuff into Tree-sitter so that we can run these queries on them.

**(24:21)** Once we run these queries, we get something like this. This is the de-obfuscated Low-Level IL. Now, you might say that all of these NOPs are a bit noisy, but luckily, once we move up to Medium-Level IL (MLIL), they are cleaned up in the process. We are left with this, which is much more readable than the original.

### Imperial Age and Future Work

**(24:51)** Finally, something I'm currently working on right now is to do some validation by actually running them in an emulation framework. There is this tool called **Sogen**, created by Marius, and this allows you to—it's like a binary instrumentation framework. The idea is to run them through this to see where and when the binary encounters problems.

**(25:33)** Previously, when I did try to run my decrypted binaries, it did just start the game on some versions. Although, there is some kind of integrity check going on as well, so on some versions, the decrypted script would launch the game, but then it would say that some tampering has been detected and disable certain features. Whereas on other versions, the game would not launch at all. So obviously there are still some bugs in this decryption and de-obfuscation process.

**(26:04)** So I'm working on running these through this instrumentation framework to understand where things are going wrong, and then again plugging this into my CI pipeline to be able to decrypt and de-obfuscate every single version of the game.

**(26:21)** So I'm just looking forward, looking at the Imperial Age, what's next for this? One thing I've been wanting to do is get to a point where I can run the game kind of headless. By doing some de-obfuscation, we can get far enough that we can patch the binary to get rid of basically all the I/O stuff. This way, we can run automated analysis of replay files from matches and perform various types of analysis there.

**(26:53)** There is also a vulnerability research angle. There are various parsers in the game; there could be some interesting things to set up with some fuzzing. So these are ideas that I might look into, but still, I'm still at the reverse engineering and de-obfuscation stage.

**(27:12)** So this is just a little bit of my adventure into *Age of Empires*. Thank you very much for listening.
