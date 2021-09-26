#include "vehicle.h"

// Ввод параметров обобщенной фигуры из файла.
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

// Случайный ввод обобщенной фигуры
shape *InRnd() {
    shape *sp;
    auto k = rand() % 2 + 1;
    switch (k) {
        case 1:
            sp = new shape;
            sp->k = shape::RECTANGLE;
            InRnd(sp->r);
            return sp;
        case 2:
            sp = new shape;
            sp->k = shape::TRIANGLE;
            InRnd(sp->t);
            return sp;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
void Out(shape &s, ofstream &ofst) {
    switch (s.k) {
        case shape::RECTANGLE:
            Out(s.r, ofst);
            break;
        case shape::TRIANGLE:
            Out(s.t, ofst);
            break;
        default:
            ofst << "Incorrect figure!" << endl;
    }
}

//------------------------------------------------------------------------------
// Вычисление периметра фигуры
double Perimeter(shape &s) {
    switch (s.k) {
        case shape::RECTANGLE:
            return Perimeter(s.r);
            break;
        case shape::TRIANGLE:
            return Perimeter(s.t);
            break;
        default:
            return 0.0;
    }
}
