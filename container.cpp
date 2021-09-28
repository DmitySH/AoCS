#include "container.h"

// Инициализация контейнера.
void Init(Container &cont) {
    cont.len = 0;
}

// Очистка контейнера от элементов (освобождение памяти).
void Clear(Container &cont) {
    for(int i = 0; i < cont.len; i++) {
        delete cont.cont[i];
    }
    cont.len = 0;
}

// Ввод содержимого контейнера из указанного потока.
void In(Container &cont, ifstream &ifst) {
    while(!ifst.eof()) {
        if((cont.cont[cont.len] = In(ifst)) != nullptr) {
            cont.len++;
        }
    }
}

// Случайный ввод содержимого контейнера.
void InRnd(Container &cont, int size) {
    while(cont.len < size) {
        if((cont.cont[cont.len] = InRnd()) != nullptr) {
            cont.len++;
        }
    }
}

// Вывод содержимого контейнера в указанный поток.
void Out(Container &cont, ofstream &ofst) {
    ofst << "Container contains " << cont.len << " elements." << endl;
    for(int i = 0; i < cont.len; i++) {
        ofst << i << ": ";
        Out(*(cont.cont[i]), ofst);
    }
}

// Вычисление суммы максимальных расстояний всех ТС в контейнере.
double MaxDistanceSum(Container &c) {
    double sum = 0.0;
    for(int i = 0; i < c.len; i++) {
        sum += MaxDistance(*(c.cont[i]));
    }
    return sum;
}

