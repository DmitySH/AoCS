#include "bus.h"
#include "../Additional_functions/random.h"
#include <stdio.h>

// Ввод параметров автобуса из файла.
void In(Bus &bus, FILE *input) {
    fscanf(input, "%hi %i %lf", &bus.max_passengers, &bus.tank_volume, &bus.consumption);
}

// Случайный ввод параметров автобуса.
void InRnd(Bus &bus) {
    bus.tank_volume = my_functions::Random(50, 150);
    bus.max_passengers = my_functions::Random(10, 70);
    bus.consumption = my_functions::Random(20.0, 45.0);
}

// Вывод параметров автобуса в форматируемый поток.
void Out(Bus &bus, FILE *output) {
    fprintf(output, "%s %hi%s %i%s %lf%s %lf \n", "It is bus: maximal passengers =",
            bus.max_passengers, ", tank volume =",
            bus.tank_volume, ", consumption =",
            bus.consumption, ". maximal range =",
            MaxRange(bus));
}

// Вычисление максимального расстояния,которое может проехать автобус.
double MaxRange(Bus &bus) {
    return bus.tank_volume * 100 / bus.consumption;
}
