#pragma once
#include "Component.h"


class Load : public Component
{
    private:
        double consumption;
    public:
        Load(double consumption, sf::Vector2f pos);
        ~Load();
        double getConsumption() const;
};

