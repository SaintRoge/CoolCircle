#include <SFML/Graphics.hpp>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#include "functions.hpp"
#include "square.hpp"
#include "circle.hpp"

using namespace sf;

int main() {

    srand (time(NULL));

    int max(100);
    int min(20);

    std::cout << "Max : ";
    std::cin >> max;

    std::cout << std::endl << "Min : ";
    std::cin >> min;

    RenderWindow window(VideoMode(380, 380), "Color Game", Style::Close | Style::Resize);

    int const it(rand()% (max - min) + min + 1);

    CircleShape shapeArray[it];
    std::cout << "Number of circles : " << it << std::endl;

    for (int i(0); i < it; i++) {

        shapeArray[i] = randomCircle();

    }

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        for (int j(0); j < it; j++) {
            shapeArray[j].setRadius(shapeArray[j].getRadius() - j);
            window.draw(shapeArray[j]);
        }
        window.display();
    }

    return 0;
}
