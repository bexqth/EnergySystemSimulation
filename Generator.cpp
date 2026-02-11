#include "Generator.h"

Generator::Generator(double wattage) : wattage(wattage)
{
}

Generator::~Generator()
{
}

double Generator::getWattage() const
{
    return this->wattage;
}
