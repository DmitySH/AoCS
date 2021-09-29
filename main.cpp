#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "Structures/truck.h"
#include "Structures/bus.h"
#include "Data_structures/container.h"


// Тестирование.
void errMessage1() {
    printf("%s", "incorrect command line!\n"
                 "  Waited:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Or:\n"
                 "     command -n number outfile01 outfile02\n");
}

void errMessage2() {
    printf("%s", "incorrect qualifier value!\n"
                 "  Waited:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Or:\n"
                 "     command -n number outfile01 outfile02\n");
}

//------------------------------------------------------------------------------
int main(int argc, char *argv[]) {
    if (argc != 5) {
        errMessage1();
        return 1;
    }

    printf("%s", "Start... \n");
    Container c;
    Init(c);

    if (!strcmp(argv[1], "-f")) {
        ifstream ifst(argv[2]);
        In(c, ifst);
    } else if (!strcmp(argv[1], "-n")) {
        int size = atoi(argv[2]);
        if ((size < 1) || (size > 10000)) {
            printf("%s %i %s", "incorrect numer of figures = ", size, ". Set 0 < number <= 10000\n");
            return 3;
        }
        srand(static_cast<unsigned int>(time(0)));
        // Заполнение контейнера генератором случайных чисел.
        InRnd(c, size);
    } else {
        errMessage2();
        return 2;
    }

    // Вывод содержимого контейнера в файл1.
    ofstream ofst1(argv[3]);
    ofst1 << "Filled container:\n";
    Out(c, ofst1);

    // Сортировка контейнера методом Шелла.
    my_functions::ShellSortByMaxDistance(c);
    ofstream ofst2(argv[4]);
    ofst2 << "Container after Shell Sort: \n";
    Out(c, ofst2);

    // Очистка памяти после работы.
    Clear(c);
    printf("%s", "Stop.");

    return 0;
}