#ifndef AOCS_TRUCK_H
#define AOCS_TRUCK_H

#include <fstream>

using namespace std;

// Грузовик.
struct Truck {
    int max_weight, tank_volume; // Грузоподъемность, объем топливного бака.
    double consumption; // Расход литров/100км.
};

// Ввод параметров грузовика из файла.
void In(Truck &truck, ifstream &ifst);

// Случайный ввод параметров грузовика.
void InRnd(Truck &truck);

// Вывод параметров грузовика в форматируемый поток.
void Out(Truck &truck, ofstream &ofst);

// Вычисление максимального расстояния,которое может проехать грузовик.
double MaxRange(Truck &truck);

#endif
