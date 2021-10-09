#ifndef MAIN_CPP_CONTAINER_H
#define MAIN_CPP_CONTAINER_H

// Описание контейнера.
#include "../Structures/vehicle.h"

struct Container {
    enum {max_len = 10001};// Максимальная длина.
    int len; // Текущая длина.
    Vehicle *cont[max_len];
};

// Инициализация контейнера.
void Init(Container &cont);

// Очистка контейнера от элементов (освобождение памяти).
void Clear(Container &cont);

// Ввод содержимого контейнера из указанного потока.
void In(Container &c, FILE *input);

// Случайный ввод содержимого контейнера.
void InRnd(Container &c, int size);

// Вывод содержимого контейнера в указанный поток.
void Out(Container &c, FILE *output);


namespace my_functions {
    void ShellSortByMaxDistance(Container &c);
}

#endif
