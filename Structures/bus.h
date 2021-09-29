#ifndef MAIN_CPP_BUS_H
#define MAIN_CPP_BUS_H

#include <fstream>
using namespace std;

// Автобус.
    struct Bus {
        int tank_volume; // Объем топливного бака.
        short max_passengers; // Пассажировместимость.
        double consumption; // Расход литров/100км.
    };

// Ввод параметров автобуса из файла.
    void In(Bus &bus, FILE *input);

// Случайный ввод параметров автобуса.
    void InRnd(Bus &bus);

// Вывод параметров автобуса в форматируемый поток.
    void Out(Bus &bus, FILE *output);

// Вычисление максимального расстояния,которое может проехать автобус.
    double MaxRange(Bus &bus);

#endif
