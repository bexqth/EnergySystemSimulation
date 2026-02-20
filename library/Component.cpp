#include "Component.h"

Component::Component(sf::Vector2f position, sf::Color color, std::string type) : position(position), color(color), type(type)
{
    shape.setSize({50.f, 50.f});
    shape.setFillColor(this->color);
    shape.setOutlineThickness(2);
    shape.setOutlineColor(sf::Color::White);
    shape.setPosition(this->position);
}

Component::~Component()
{
}

void Component::draw(sf::RenderWindow &window)
{
    window.draw(shape);
}
