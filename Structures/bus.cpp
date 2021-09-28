#include "bus.h"
#include "../Additional_functions/random.h"

// Ввод параметров автобуса из файла.
void In(Bus &bus, ifstream &ifst) {
    ifst >> bus.max_passengers >> bus.tank_volume >> bus.consumption;
}

// Случайный ввод параметров автобуса.
void InRnd(Bus &bus) {
    bus.tank_volume = Random(50, 150);
    bus.max_passengers = Random(10, 70);
    bus.consumption = Random(20.0, 45.0);
}

// Вывод параметров автобуса в форматируемый поток.
void Out(Bus &bus, ofstream &ofst) {
    ofst << "It is car: maximal passengers = "
         << bus.max_passengers << ", tank volume = "
         << bus.tank_volume << ", consumption = "
         << bus.consumption << ". maximal range = "
         << MaxRange(bus) << "\n";
}

// Вычисление максимального расстояния,которое может проехать автобус.
double MaxRange(Bus &bus) {
    return bus.tank_volume * 100 / bus.consumption;
}
