#include "truck.h"
#include "../Additional_functions/random.h"

// Ввод параметров грузовика из файла.
void In(Truck &truck, FILE *input) {
    int max_weight, tank_volume;
    double consumption;
    if (fscanf(input, "%i %i %lf", &max_weight, &tank_volume, &consumption) != 3) {
        throw std::invalid_argument("Incorrect vehicle!");
    }
    if (max_weight < 1000 || max_weight > 4000 || tank_volume < 200 ||
        tank_volume > 800 || consumption < 20.0 || consumption > 45.0) {
        throw std::invalid_argument("Incorrect data for that vehicle!");
    } else{
        truck.tank_volume = tank_volume;
        truck.max_weight = max_weight;
        truck.consumption = consumption;
    }
}

// Случайный ввод параметров грузовика.
void InRnd(Truck &truck) {
    truck.tank_volume = my_functions::Random(200, 800);
    truck.max_weight = my_functions::Random(1000, 4000);
    truck.consumption = my_functions::Random(20.0, 45.0);
}

// Вывод параметров грузовика в форматируемый поток.
void Out(Truck &truck, FILE *output) {
    fprintf(output, "%s %i%s %i%s %lf%s %lf \n", "It is truck: maximal weight =",
            truck.max_weight, ", tank volume =",
            truck.tank_volume, ", consumption =",
            truck.consumption, ". maximal range =",
            MaxRange(truck));
}

// Вычисление максимальногорасстояние,которое может проехать автомобиль.
double MaxRange(Truck &truck) {
    return truck.tank_volume * 100 / truck.consumption;
}
