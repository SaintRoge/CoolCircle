#include "functions.hpp"

sf::CircleShape randomCircle() {
	sf::CircleShape shape(rand() % 101);
	shape.setFillColor(sf::Color(rand() % 266, rand() % 266, rand() % 266));
    shape.setOrigin (-(rand() % 200), -(rand() % 200));

    return shape;
}