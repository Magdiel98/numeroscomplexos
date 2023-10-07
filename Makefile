#SEU MAKEFILE


complexo: build/main.o build/complexo.o 
	g++ -Wall -ansi -pedantic -o bin/complexo build/main.o build/complexo.o

build/main.o: src/main.cpp include/complexo.h
	g++ -c src/main.cpp -Iinclude -o build/main.o

build/complexo.o: src/complexo.cpp include/complexo.h 
	g++ -c src/complexo.cpp -Iinclude -o build/complexo.o 
