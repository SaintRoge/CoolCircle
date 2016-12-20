#include <SFML/Graphics.hpp>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "functions.hpp"
#include "square.hpp"
#include "circle.hpp"

using namespace sf;

int main() {
    RenderWindow window(VideoMode(300, 300), "Color Game", Style::Close | Style::Resize);

    srand (time(NULL));

    int const it(rand()% 201 +25);

    CircleShape shapeArray[it];

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
            window.draw(shapeArray[j]);
        }
        window.display();
    }

    return 0;
}
