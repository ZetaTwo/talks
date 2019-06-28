BIN=/home/zetatwo/tools/gbdk-n/bin
OBJ=./obj

build:
	mkdir -p $(OBJ)
	$(BIN)/gbdk-n-compile.sh slides.c -o $(OBJ)/slides.rel
	$(BIN)/gbdk-n-link.sh $(OBJ)/slides.rel -o $(OBJ)/slides.ihx
	$(BIN)/gbdk-n-make-rom.sh $(OBJ)/slides.ihx slides.gb

clean:
	rm -rf $(OBJ)
	rm -f slides.gb
