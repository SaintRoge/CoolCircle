#include "functions.hpp"

sf::CircleShape randomCircle() {
	sf::CircleShape shape(rand() % 101);
	shape.setFillColor(sf::Color(rand() % 266, rand() % 266, rand() % 266));
    shape.setOrigin (-(rand() % 201), -(rand() % 201));
    shape.setPointCount(rand() % 201);

    return shape;
}