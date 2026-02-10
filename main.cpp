#include <iostream>
#include "Cell.h"

int main() {
    std::cout << "Hello world" << std::endl;
    Cell* mojaBunka = new Cell(100);
    std::cout << "Adresa v pamati: " << mojaBunka << std::endl;
    std::cout << "Hodnota kapacity: " << mojaBunka->getMaxCapacity() << std::endl;
    return 0;
}
