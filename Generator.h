#pragma once

class Generator
{
    private:
        double wattage;
    public:
        Generator(double wattage);
        ~Generator();
        double getWattage() const;
};
