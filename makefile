CXX = x86_64-w64-mingw32-g++
br: clean compilar ejecutar

compilar: src/Snake.cpp
	$(CXX) src/Snake.cpp -o bin/Vibora -I include

ejecutar: bin/Vibora
	./bin/Vibora

clean: bin/Vibora
	rm bin/Vibora

bin/Snake : src/Snake.cpp include/*
	c++ src/Snake.cpp -o bin/Snake -lcurses -I include

run : bin/Snake
	./bin/Snake