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
		rm -rf *.o SFML-2.4.1-linux-gcc-64-bit.tar.gz SFML-2.4.1

mrproper: clean
		rm -rf SFML-Game  

install: 
		wget http://www.sfml-dev.org/files/SFML-2.4.1-linux-gcc-64-bit.tar.gz
		tar zxvf SFML-2.4.1-linux-gcc-64-bit.tar.gz
		sudo cp -R SFML-2.4.1/include/SFML /usr/include
		make all

