#include "car.h"
#include "../Additional_functions/random.h"

// Ввод параметров автомобиля из файла.
void In(Car &car, ifstream &ifst) {
    ifst >> car.max_speed >> car.tank_volume >> car.consumption;
}

// Случайный ввод параметров автомобиля.
void InRnd(Car &car) {
    car.tank_volume = my_functions::Random(50, 150);
    car.max_speed = my_functions::Random(80, 320);
    car.consumption = my_functions::Random(20.0, 35.0);
}

// Вывод параметров автомобиля в форматируемый поток.
void Out(Car &car, ofstream &ofst) {
    ofst << "It is car: maximal speed = "
         << car.max_speed << ", tank volume = "
         << car.tank_volume << ", consumption = "
         << car.consumption << ". maximal range = "
         << MaxRange(car) << "\n";
}

// Вычисление максимального расстояния,которое может проехать автомобиль.
double MaxRange(Car &car) {
    return car.tank_volume * 100 / car.consumption;
}
