#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Shape.hpp>
#include "callShape.h"

using namespace sf;

int main() {
    RenderWindow window(VideoMode(200, 200), "Little Test");

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}