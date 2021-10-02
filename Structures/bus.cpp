#include "bus.h"
#include "../Additional_functions/random.h"
#include <stdio.h>

// Ввод параметров автобуса из файла.
void In(Bus &bus, FILE *input) {
    int tank_volume;
    short max_passengers;
    double consumption;
    if (fscanf(input, "%hi %i %lf", &max_passengers, &tank_volume, &consumption) != 3) {
        throw std::invalid_argument("Incorrect vehicle!");
    }
    if (max_passengers < 10 || max_passengers > 70 || tank_volume < 80 ||
        tank_volume > 250 || consumption < 12.0 || consumption > 30.0) {
        throw std::invalid_argument("Incorrect data for that vehicle!");
    } else {
        bus.tank_volume = tank_volume;
        bus.max_passengers = max_passengers;
        bus.consumption = consumption;
    }
}

// Случайный ввод параметров автобуса.
void InRnd(Bus &bus) {
    bus.tank_volume = my_functions::Random(80, 250);
    bus.max_passengers = my_functions::Random(10, 70);
    bus.consumption = my_functions::Random(12.0, 30.0);
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
