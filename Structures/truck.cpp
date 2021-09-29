#include "truck.h"
#include "../Additional_functions/random.h"

// Ввод параметров грузовика из файла.
void In(Truck &truck, FILE *input) {
    fscanf(input, "%i %i %lf", &truck.max_weight, &truck.tank_volume, &truck.consumption);
}

// Случайный ввод параметров грузовика.
void InRnd(Truck &truck){
    truck.tank_volume = my_functions::Random(200, 800);
    truck.max_weight = my_functions::Random(1000, 4000);
    truck.consumption = my_functions::Random(20.0, 45.0);
}

// Вывод параметров грузовика в форматируемый поток.
void Out(Truck &truck, FILE *output) {
    fprintf(output, "%s %hi%s %i%s %lf%s %lf \n", "It is truck: maximal weight =",
            truck.max_weight, ", tank volume =",
            truck.tank_volume, ", consumption =",
            truck.consumption, ". maximal range =",
            MaxRange(truck));
}

// Вычисление максимальногорасстояние,которое может проехать автомобиль.
double MaxRange(Truck &truck) {
    return truck.tank_volume * 100 / truck.consumption;
}
