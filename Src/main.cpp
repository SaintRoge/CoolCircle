#include <SFML/Graphics.hpp>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "functions.hpp"
#include "square.hpp"
#include "circle.hpp"

using namespace sf;

int main() {
    RenderWindow const window(VideoMode(300, 300), "Color Game", Style::Close | Style::Resize);

    srand (time(NULL));

    int const it(rand()% 20 + 5);

    CircleShape shapeArray[it];

    for (int i(0); i < it; i++) {

        shapeArray[i] = randomCircle();

    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}