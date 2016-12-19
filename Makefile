SFML-Game : main.o functions.o
		g++ main.o functions.o -o SFML-Game -lsfml-graphics -lsfml-window -lsfml-system

main.o : Src/main.cpp Src/functions.cpp
		g++ -c Src/main.cpp Src/functions.cpp

functions.o : Src/functions.cpp
		g++ -c Src/functions.cpp 
