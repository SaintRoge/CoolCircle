#include "functions.hpp"

sf::CircleShape randomCircle() {
	sf::CircleShape shape(rand() % 21);
	shape.setFillColor(sf::Color(rand() % 266, rand() % 266, rand() % 266));
    shape.setOrigin (-(rand() % 400 + 400), -(rand() % 400 + 400));
    shape.setPointCount(36);

    return shape;
}