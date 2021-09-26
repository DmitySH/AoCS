#ifndef MAIN_CPP_CAR_H
#define MAIN_CPP_CAR_H

#include <fstream>
using namespace std;

// Автомобиль.
struct Car {
    int tank_volume; // Объем топливного бака.
    short max_speed; // Максимальная скорость.
    double consumption; // Расход литров/100км.
};

// Ввод параметров автомобиля из файла.
void In(Car &car, ifstream &ifst);

// Случайный ввод параметров автомобиля.
void InRnd(Car &car);

// Вывод параметров автомобиля в форматируемый поток.
void Out(Car &car, ofstream &ofst);

// Вычисление максимального расстояния,которое может проехать автомобиль.
double MaxRange(Car &car);

#endif
