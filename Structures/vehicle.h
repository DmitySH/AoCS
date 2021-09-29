#ifndef MAIN_CPP_VEHICLE_H
#define MAIN_CPP_VEHICLE_H

#include "car.h"
#include "bus.h"
#include "truck.h"

// Описание обобщающего транспортного средства.
struct Vehicle {
    // Значения ключей для каждой из фигур.
    enum key {
        CAR, BUS, TRUCK
    };

    key key; // Ключ.
    // Используемые альтернативы.
    union {
        Car car;
        Bus bus;
        Truck truck;
    };
};

// Ввод обобщенного ТС.
Vehicle *In(FILE *input);

// Случайный ввод обобщенного ТС.
Vehicle *InRnd();

// Вывод обобщенного ТС.
void Out(Vehicle &vehicle, FILE *output);

// Вычисление максимального расстояния обобщенного ТС.
double MaxDistance(Vehicle &vehicle);

#endif
