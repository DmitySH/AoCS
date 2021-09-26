#include "random.h"
#include <cstdlib>

double Random(double from, double to) {
    return from + ((double)to - from) * rand() / (double)RAND_MAX;
}

int Random(int from, int to) {
    return from + rand() % (to - from + 1);
}
