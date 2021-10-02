#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "Data_structures/container.h"

void StartMessage() {
    printf("%s", "File input:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Random input:\n"
                 "     command -n number outfile01 outfile02\n\n");

    printf("%s", "To use file input:\n"
                 "one line = one vehicle\n"
                 "first parameter - number from 1 to 3, where 1 - car, 2 - bus, 3 - truck\n"
                 "second parameter - unique property of the vehicle\n"
                 "80 - 320 integer for car, 10 - 70 integer for bus, 1000 - 4000 integer for truck\n"
                 "third parameter is tank volume\n"
                 "50 - 150 integer for car, 80 - 250 integer for bus, 200 - 800 integer for truck\n"
                 "last parameter is consumption\n"
                 "6 - 25 real for car, 12 - 30 real for bus, 20 - 45 real for truck\n\n"
    );
}

void ErrMessage1() {
    printf("%s", "incorrect command line!\n"
                 "  Waited:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Or:\n"
                 "     command -n number outfile01 outfile02\n");
}

void ErrMessage2() {
    printf("%s", "incorrect qualifier value!\n"
                 "  Waited:\n"
                 "     command -f infile outfile01 outfile02\n"
                 "  Or:\n"
                 "     command -n number outfile01 outfile02\n");
}

//Тестирование.
int main(int argc, char *argv[]) {
    if (argc != 5) {
        ErrMessage1();
        return 1;
    }

    printf("%s", "Start... \n");
    StartMessage();
    Container c;
    Init(c);


    if (!strcmp(argv[1], "-f")) {
        try {
            FILE *input = fopen(argv[2], "r");
            In(c, input);
            fclose(input);
        } catch (std::invalid_argument const &ex) {
            FILE *out = fopen(argv[3], "w");
            fprintf(out, "%s\n%s %i", ex.what(), "Wrong line", c.len + 1);
            fclose(out);
            out = fopen(argv[4], "w");
            fprintf(out, "%s\n%s %i", ex.what(), "Wrong line", c.len + 1);
            fclose(out);

            printf("%s\n%s %i", ex.what(), "Wrong line:", c.len + 1);
            return 4;
        }
    } else if (!strcmp(argv[1], "-n")) {
        int size = atoi(argv[2]);
        if ((size < 1) || (size > 10000)) {
            printf("%s %i %s", "incorrect number of figures = ", size, ". Set 0 < number <= 10000\n");
            return 3;
        }
        srand(static_cast<unsigned int>(time(0)));
        // Заполнение контейнера генератором случайных чисел.
        InRnd(c, size);
    } else {
        ErrMessage2();
        return 2;
    }


    // Вывод содержимого контейнера в файл1.
    FILE *output = fopen(argv[3], "w");
    fprintf(output, "%s", "Filled container:\n");
    Out(c, output);
    fclose(output);

    // Сортировка контейнера методом Шелла.
    my_functions::ShellSortByMaxDistance(c);
    output = fopen(argv[4], "w");
    fprintf(output, "%s", "Container after Shell Sort: \n");
    // Вывод содержимого контейнера в файл2.
    Out(c, output);
    fclose(output);

    // Очистка памяти после работы.
    Clear(c);
    printf("%s", "Stop. Success!");

    return 0;
}