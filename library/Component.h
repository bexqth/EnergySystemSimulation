#pragma once

#include <SFML/Graphics.hpp>

class Component
{
private:
    sf::RectangleShape shape;
    sf::Color color;
    sf::Vector2f position;
    std::string type;
public:
    Component(sf::Vector2f pos, sf::Color color, std::string t);
    ~Component();
    void draw(sf::RenderWindow& window);
};

