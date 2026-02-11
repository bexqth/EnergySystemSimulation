#include <iostream>
#include "Cell.h"
#include "Battery.h"
#include "Load.h"
#include "Generator.h"
#include "System.h"

using namespace std;

int main() {
    System system;
    Generator* g1 = new Generator("G1");
    g1->addModule(new Module(ModuleType::ENGINE, 30.0));
    g1->addModule(new Module(ModuleType::TURBINE, 45.0));
    system.addGenerator(g1);

    Load* l1 = new Load(10.0);
    Load* l2 = new Load(15.0);
    system.addLoad(l1);
    system.addLoad(l2);

    system.tick();

    /*Battery battery;
    battery.addCell(new Cell(100.0));
    Load load(10.0);

    for (int i = 0; i < 4; i++)
    {
        battery.dischargeBattery(load.getConsumption());
        cout << "Batery current energy " << battery.getEnergy() << endl;
        cout << " " << endl;
    }*/
    
    return 0;
}
