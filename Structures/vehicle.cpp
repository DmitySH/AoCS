#include "vehicle.h"
// Описание обобщенного транспортного средства (ТС).

// Ввод параметров ТС из файла.
Vehicle *In(ifstream &ifst) {
    Vehicle *vehicle;
    int k;
    ifst >> k;
    switch (k) {
        case 1:
            vehicle = new Vehicle;
            vehicle->key = Vehicle::CAR;
            In(vehicle->car, ifst);
            return vehicle;
        case 2:
            vehicle = new Vehicle;
            vehicle->key = Vehicle::BUS;
            In(vehicle->bus, ifst);
            return vehicle;
        case 3:
            vehicle = new Vehicle;
            vehicle->key = Vehicle::TRUCK;
            In(vehicle->truck, ifst);
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
            vehicle->key = Vehicle::CAR;
            InRnd(vehicle->car);
            return vehicle;
        case 2:
            vehicle = new Vehicle;
            vehicle->key = Vehicle::BUS;
            InRnd(vehicle->bus);
            return vehicle;
        case 3:
            vehicle = new Vehicle;
            vehicle->key = Vehicle::TRUCK;
            InRnd(vehicle->truck);
            return vehicle;
        default:
            return nullptr;
    }
}


// Вывод параметров текущего ТС в поток.
void Out(Vehicle &vehicle, ofstream &ofst) {
    switch (vehicle.key) {
        case Vehicle::CAR:
            Out(vehicle.car, ofst);
            break;
        case Vehicle::BUS:
            Out(vehicle.bus, ofst);
            break;
        case Vehicle::TRUCK:
            Out(vehicle.truck, ofst);
            break;
        default:
            ofst << "Incorrect vehicle!" << endl;
    }
}


// Вычисление максимального расстояния на котором можно проехать на ТС.
double MaxDistance(Vehicle &vehicle) {
    switch (vehicle.key) {
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
