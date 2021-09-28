#include "truck.h"
#include "../Additional_functions/random.h"

// Ввод параметров грузовика из файла.
void In(Truck &truck, ifstream &ifst) {
    ifst >> truck.max_weight >> truck.tank_volume >> truck.consumption;
}

// Случайный ввод параметров грузовика.
void InRnd(Truck &truck){
    truck.tank_volume = Random(200, 800);
    truck.max_weight = Random(1000, 4000);
    truck.consumption = Random(20.0, 45.0);
}

// Вывод параметров грузовика в форматируемый поток.
void Out(Truck &truck, ofstream &ofst) {
    ofst << "It is truck: maximal weight = "
         << truck.max_weight << ", tank volume = "
         << truck.tank_volume << ", consumption = "
         << truck.consumption << ". maximal range = "
         << MaxRange(truck) << "\n";
}

// Вычисление максимальногорасстояние,которое может проехать автомобиль.
double MaxRange(Truck &truck) {
    return truck.tank_volume * 100 / truck.consumption;
}
