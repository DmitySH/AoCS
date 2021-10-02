#include "vehicle.h"
// Описание обобщенного транспортного средства (ТС).

// Ввод параметров ТС из файла.
Vehicle *In(FILE *input) {
    Vehicle *vehicle;
    int k;
    fscanf(input, "%i \n", &k);

    switch (k) {
        case 1:
            vehicle = new Vehicle;
            vehicle->k = Vehicle::CAR;
            In(vehicle->car, input);
            return vehicle;
        case 2:
            vehicle = new Vehicle;
            vehicle->k = Vehicle::BUS;
            In(vehicle->bus, input);
            return vehicle;
        case 3:
            vehicle = new Vehicle;
            vehicle->k = Vehicle::TRUCK;
            In(vehicle->truck, input);
            return vehicle;
        default:
            return nullptr;
    }
}

// Случайный ввод ТС.
Vehicle *InRnd() {
    Vehicle *vehicle;
    int k = rand() % 3 + 1;
    switch (k) {
        case 1:
            vehicle = new Vehicle;
            vehicle->k = Vehicle::CAR;
            InRnd(vehicle->car);
            return vehicle;
        case 2:
            vehicle = new Vehicle;
            vehicle->k = Vehicle::BUS;
            InRnd(vehicle->bus);
            return vehicle;
        case 3:
            vehicle = new Vehicle;
            vehicle->k = Vehicle::TRUCK;
            InRnd(vehicle->truck);
            return vehicle;
        default:
            return nullptr;
    }
}


// Вывод параметров текущего ТС в поток.
void Out(Vehicle &vehicle, FILE *output) {
    switch (vehicle.k) {
        case Vehicle::CAR:
            Out(vehicle.car, output);
            break;
        case Vehicle::BUS:
            Out(vehicle.bus, output);
            break;
        case Vehicle::TRUCK:
            Out(vehicle.truck, output);
            break;
        default:
            fprintf(output, "%s", "Incorrect vehicle!\n");
    }
}


// Вычисление максимального расстояния на котором можно проехать на ТС.
double MaxDistance(Vehicle &vehicle) {
    switch (vehicle.k) {
        case Vehicle::CAR:
            return MaxRange(vehicle.car);
        case Vehicle::BUS:
            return MaxRange(vehicle.bus);
        case Vehicle::TRUCK:
            return MaxRange(vehicle.truck);
        default:
            return 0.0;
    }
}
