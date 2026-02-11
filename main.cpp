#include <iostream>
#include "Cell.h"
#include "Battery.h"
#include "Load.h"
#include "Generator.h"

using namespace std;

int main() {
    Generator generator;
    Battery battery;
    battery.addCell(new Cell(100.0));
    Load load(10.0);

    for (int i = 0; i < 4; i++)
    {
        battery.dischargeBattery(load.getConsumption());
        cout << "Batery current energy " << battery.getEnergy() << endl;
        cout << " " << endl;
    }

    battery.chargeBattery(generator.getWattage());
    
    return 0;
}
