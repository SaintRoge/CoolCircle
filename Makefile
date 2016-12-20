.PHONY: clean, mrproper, install

.SUFFIXES:

app = SFML-Game
lib = -lsfml-graphics -lsfml-window -lsfml-system
CXX = g++
RM = rm -rf

all: main.o functions.o
		$(CXX) $^ -o $(app) $(lib)
		@echo "Build finished. You are ready to use $(app) :-)"

%.o: Src/%.cpp
		$(CXX) -c $< -o $@  

clean:
		$(RM) *.o 

mrproper: clean
		$(RM) $(app)  

install: 
		sudo apt-get install libsfml-dev
		make all


