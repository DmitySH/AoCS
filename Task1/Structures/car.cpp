#include "car.h"
#include "../Additional_functions/random.h"

// Ввод параметров автомобиля из файла.
void In(Car &car, FILE *input) {
    int tank_volume;
    short max_speed;
    double consumption;
    if (fscanf(input, "%hi %i %lf", &max_speed, &tank_volume, &consumption) != 3) {
        throw std::invalid_argument("Incorrect vehicle!");
    }
    if (max_speed < 80 || max_speed > 320 || tank_volume < 50 ||
        tank_volume > 150 || consumption < 6.0 || consumption > 25.0) {
        throw std::invalid_argument("Incorrect data for that vehicle!");
    } else {
        car.tank_volume = tank_volume;
        car.max_speed = max_speed;
        car.consumption = consumption;
    }
}

// Случайный ввод параметров автомобиля.
void InRnd(Car &car) {
    car.tank_volume = my_functions::Random(50, 150);
    car.max_speed = my_functions::Random(80, 320);
    car.consumption = my_functions::Random(6.0, 25.0);
}

// Вывод параметров автомобиля в форматируемый поток.
void Out(Car &car, FILE *output) {
    fprintf(output, "%s %hi%s %i%s %lf%s %lf \n", "It is car: maximal speed =",
            car.max_speed, ", tank volume = ",
            car.tank_volume, ", consumption =",
            car.consumption, ". maximal range =",
            MaxRange(car));
}

// Вычисление максимального расстояния,которое может проехать автомобиль.
double MaxRange(Car &car) {
    return car.tank_volume * 100 / car.consumption;
}
