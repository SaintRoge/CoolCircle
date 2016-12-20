#include <SFML/Graphics.hpp>
#include "functions.hpp"
#include "square.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace sf;

int main() {
    RenderWindow window(VideoMode(200, 200), "SFML works!");

    srand (time(NULL));

    int red(rand() % 266);
    int green(rand() % 266);
    int blue(rand() % 266);

    CircleShape shape(100.f);

    shape.setFillColor(Color(red, green, blue));

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}