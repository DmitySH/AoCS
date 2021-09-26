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

#endif
