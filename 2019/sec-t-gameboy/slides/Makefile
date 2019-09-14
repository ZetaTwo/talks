BIN=/home/zetatwo/tools/gbdk-n/bin
OBJ=./obj

build:
	mkdir -p $(OBJ)
	python3 generate_slides.py slides.yml > slide.c
	$(BIN)/gbdk-n-compile.sh presenter.c -o $(OBJ)/presenter.rel
	$(BIN)/gbdk-n-compile.sh slide.c -o $(OBJ)/slide.rel
	$(BIN)/gbdk-n-link.sh $(OBJ)/presenter.rel $(OBJ)/slide.rel $(OBJ)/fonts/*.rel -o $(OBJ)/presenter.ihx
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
