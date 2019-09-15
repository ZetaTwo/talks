BIN=/home/zetatwo/tools/gbdk-n/bin
OBJ=./obj

build:
	mkdir -p $(OBJ)
	python3 generate_slides2.py slides2.yml > slide2.c
	$(BIN)/gbdk-n-compile.sh presenter2.c -o $(OBJ)/presenter.rel

	$(BIN)/gbdk-n-compile.sh midnightlogo.c -o $(OBJ)/midnightlogo.rel
	$(BIN)/gbdk-n-compile.sh hfslogo.c -o $(OBJ)/hfslogo.rel
	$(BIN)/gbdk-n-compile.sh calcscreenshot.c -o $(OBJ)/calcscreenshot.rel

	$(BIN)/gbdk-n-compile.sh slide2.c -o $(OBJ)/slide.rel
	$(BIN)/gbdk-n-link.sh $(OBJ)/presenter.rel $(OBJ)/slide.rel $(OBJ)/calcscreenshot.rel $(OBJ)/hfslogo.rel $(OBJ)/midnightlogo.rel $(OBJ)/fonts/8x8.rel -o $(OBJ)/presenter.ihx
	$(BIN)/gbdk-n-make-rom.sh $(OBJ)/presenter.ihx presenter.gb

.PHONY: fonts clean

fonts:
	mkdir -p $(OBJ)/fonts
	$(BIN)/gbdk-n-compile.sh fonts/8x8.c -o $(OBJ)/fonts/8x8.rel
	$(BIN)/gbdk-n-compile.sh fonts/alpha.c -o $(OBJ)/fonts/alpha.rel
	$(BIN)/gbdk-n-compile.sh fonts/digits.c -o $(OBJ)/fonts/digits.rel
	$(BIN)/gbdk-n-compile.sh fonts/shaded_alpha.c -o $(OBJ)/fonts/shaded_alpha.rel
	$(BIN)/gbdk-n-compile.sh fonts/shadow.c -o $(OBJ)/fonts/shadow.rel

clean:
	rm -rf $(OBJ)
	rm -f slides.gb
