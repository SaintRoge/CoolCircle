#include "functions.hpp"

sf::CircleShape randomCircle(int r, int g, int b) {
	sf::CircleShape shape(std::rand() % 21);
	shape.setFillColor(sf::Color(r, g, b));
    shape.setOrigin (-(std::rand() % 400 + 400), -(std::rand() % 400 + 400));
    shape.setPointCount(36);

    return shape;
}