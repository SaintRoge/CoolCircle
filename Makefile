SFML-Game : main.o 
		g++ main.o -o SFML-Game -lsfml-graphics -lsfml-window -lsfml-system

main.o : Src/main.cpp
		g++ -c Src/main.cpp 


