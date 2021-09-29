#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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

//Тестирование.
int main(int argc, char *argv[]) {
    if (argc != 5) {
        errMessage1();
        return 1;
    }

    printf("%s", "Start... \n");
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
    FILE *output = fopen(argv[3], "w");
    fprintf(output, "%s", "Filled container:\n");
    Out(c, output);
    fclose(output);

    // Сортировка контейнера методом Шелла.
    my_functions::ShellSortByMaxDistance(c);
    output = fopen(argv[4], "w");
    fprintf(output, "%s", "Container after Shell Sort: \n");
    Out(c, output);
    fclose(output);

    // Очистка памяти после работы.
    Clear(c);
    printf("%s", "Stop.");

    return 0;
}