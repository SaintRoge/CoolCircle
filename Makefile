.PHONY: clean, mrproper, install

.SUFFIXES:

all: main.o functions.o 
		g++ main.o functions.o -o SFML-Game -lsfml-graphics -lsfml-window -lsfml-system
		@echo "Build finished. You are ready to use SFML-Game :-)"

main.o: Src/main.cpp Src/functions.cpp 
		g++ -c Src/main.cpp Src/functions.cpp

functions.o: Src/functions.cpp
		g++ -c Src/functions.cpp 


clean:
		rm -rf *.o 

mrproper: clean
		rm -rf SFML-Game  

install: 
		sudo apt-get install libsfml-dev
		make all

