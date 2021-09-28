#ifndef MAIN_CPP_CONTAINER_H
#define MAIN_CPP_CONTAINER_H

// Описание контейнера.
#include "vehicle.h"

struct Container {
    static const int max_len = 10000;// Максимальная длина.
    int len; // Текущая длина.
    Vehicle *cont[max_len];
};

// Инициализация контейнера.
void Init(Container &cont);

// Очистка контейнера от элементов (освобождение памяти).
void Clear(Container &cont);

// Ввод содержимого контейнера из указанного потока.
void In(Container &c, ifstream &ifst);

// Случайный ввод содержимого контейнера.
void InRnd(Container &c, int size);

// Вывод содержимого контейнера в указанный поток.
void Out(Container &c, ofstream &ofst);

// Вычисление суммы максимальных расстояний всех ТМ в контейнере.
double MaxDistanceSum(Container &c);

#endif
