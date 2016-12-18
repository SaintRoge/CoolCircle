Test : main.o 
		g++ main.o -o Test -lsfml-graphics -lsfml-window -lsfml-system

main.o : Src/main.cpp
		g++ -c Src/main.cpp 


