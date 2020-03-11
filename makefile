main:
	g++ src/main.cpp -o game -Iincludes/ `pkg-config gtkmm-3.0 --cflags --libs`
	mv game bin

	./bin/game

