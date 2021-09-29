#include "container.h"

// Инициализация контейнера.
void Init(Container &cont) {
    cont.len = 0;
}

// Очистка контейнера от элементов (освобождение памяти).
void Clear(Container &cont) {
    for (int i = 0; i < cont.len; i++) {
        delete cont.cont[i];
    }
    cont.len = 0;
}

// Ввод содержимого контейнера из указанного потока.
void In(Container &cont, FILE *input) {
    while (!feof(input)) {
        if ((cont.cont[cont.len] = In(input)) != nullptr) {
            ++cont.len;
        }
        else {
            throw invalid_argument("Incorrect vehicle on line ");
        }
    }
}

// Случайный ввод содержимого контейнера.
void InRnd(Container &cont, int size) {
    while (cont.len < size) {
        if ((cont.cont[cont.len] = InRnd()) != nullptr) {
            cont.len++;
        }
    }
}

// Вывод содержимого контейнера в указанный поток.
void Out(Container &cont, FILE *output) {
    fprintf(output, "%s %i %s", "Container contains", cont.len, "elements\n");
    for (int i = 0; i < cont.len; i++) {
        fprintf(output, "%i%s", i, ": ");
        Out(*(cont.cont[i]), output);
    }
}

namespace my_functions {
    void ShellSortByMaxDistance(Container &c) {
        int d = c.len / 2;
        while (d != 0) {
            for (int i = d; i < c.len; i += d) {
                int j = i;
                while (j > 0 && MaxDistance(*c.cont[j - d]) > MaxDistance(*c.cont[j])) {
                    Vehicle *temp = c.cont[j - d];
                    c.cont[j - d] = c.cont[j];
                    c.cont[j] = temp;
                    j -= d;
                }
            }
            d /= 2;
        }
    }
}
