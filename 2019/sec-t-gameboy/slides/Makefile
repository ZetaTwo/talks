CC=/opt/gbdk/bin/lcc
OBJ=./obj

build:
	mkdir -p $(OBJ)
	python3 generate_slides2.py slides2.yml > slide2.c
	$(CC) -c presenter2.c -o $(OBJ)/presenter.rel

	$(CC) -c midnightlogo.c -o $(OBJ)/midnightlogo.rel
	$(CC) -c hfslogo.c -o $(OBJ)/hfslogo.rel
	$(CC) -c calcscreenshot.c -o $(OBJ)/calcscreenshot.rel
	$(CC) -c calcscreenshot2.c -o $(OBJ)/calcscreenshot2.rel
	$(CC) -c calcscreenshot3.c -o $(OBJ)/calcscreenshot3.rel
	$(CC) -c front.c -o $(OBJ)/front.rel

	$(CC) -c slide2.c -o $(OBJ)/slide.rel
	$(CC) $(OBJ)/presenter.rel $(OBJ)/slide.rel $(OBJ)/front.rel $(OBJ)/calcscreenshot*.rel $(OBJ)/hfslogo.rel $(OBJ)/midnightlogo.rel $(OBJ)/fonts/8x8.rel -o $(OBJ)/presenter.ihx
	$(CC) $(OBJ)/presenter.ihx -o presenter.gb

.PHONY: fonts clean

fonts:
	mkdir -p $(OBJ)/fonts
	$(CC) -c fonts/8x8.c -o $(OBJ)/fonts/8x8.rel
	$(CC) -c fonts/alpha.c -o $(OBJ)/fonts/alpha.rel
	$(CC) -c fonts/digits.c -o $(OBJ)/fonts/digits.rel
	$(CC) -c fonts/shaded_alpha.c -o $(OBJ)/fonts/shaded_alpha.rel
	$(CC) -c fonts/shadow.c -o $(OBJ)/fonts/shadow.rel

clean:
	rm -rf $(OBJ)
	rm -f slides.gb
