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

    int max(200);
    int min(100);

    float x;
    float y;

    RenderWindow window(VideoMode(750, 750), "CoolCircle", Style::Close | Style::Resize);

    int const it(rand()% (max - min) + min + 1);

    CircleShape shapeArray[it];
    std::cout << "Number of circles : " << it-1 << std::endl;

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

        for (int j(1); j < it; j++) {
            shapeArray[j].setRadius(shapeArray[j].getRadius() - 0.3);
            window.draw(shapeArray[j]);
        }
        window.display();
    }

    return 0;
}
