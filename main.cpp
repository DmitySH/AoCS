#include "truck.h"
#include <iostream>

int main() {
    Truck truck {};
    InRnd(truck);
    ofstream ofst1("txttt.txt");
    ofst1 << "Filled container:\n";
    Out(truck, ofst1);
    return 0;
}
