#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cstring>

#include "Structures/truck.h"

// Тестирование.
int main() {
    Truck truck {};
    InRnd(truck);
    ofstream ofst1("txttt.txt");
    ofst1 << "Filled container:\n";
    Out(truck, ofst1);
    return 0;
}
