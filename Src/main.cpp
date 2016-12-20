#include <SFML/Graphics.hpp>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <string>

#include "functions.hpp"
#include "square.hpp"
#include "circle.hpp"

using namespace sf;

int main() {

    srand (time(NULL));

    std::cout << "Enter 6 (random) numbers" << std::endl;

    int max(200);
    int min(100);

    int rMin(std::rand() % 256);
    int gMin(std::rand() % 256);
    int bMin(std::rand() % 256);

    int rMax(std::rand() % 256);
    int gMax(std::rand() % 256);
    int bMax(std::rand() % 256);

    float speed((float)(std::rand() % 1000) / 2000.f + 1.f);

    /*std::cin >> rMin;
    std::cin >> gMin;
    std::cin >> bMin;

    std::cin >> rMax;
    std::cin >> gMax;
    std::cin >> bMax;*/ // Decomment these lines to get personnalize colors 

    float x;
    float y;

    RenderWindow window(VideoMode(750, 750), "CoolCircle", Style::Close | Style::Resize);

    int const it(std::rand()% (max - min) + min + 1);

    CircleShape shapeArray[it];
    std::cout << "Number of circles : " << it-1 << std::endl;

    for (int i(0); i < it; i++) {
        shapeArray[i] = randomCircle(std::rand() % (rMax - rMin + 1) + rMin, std::rand() % (gMax - gMin + 1) + gMin, std::rand() % (bMax - bMin + 1) + bMin); //r-g-b

    }

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }   

        window.clear();

        for (int j(1); j < it; j++) { //Moving
            shapeArray[j].setRadius(shapeArray[j].getRadius() - speed);
            window.draw(shapeArray[j]);
        }
        window.display();
    }

    return 0;
}
