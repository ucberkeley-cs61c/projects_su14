#include <string.h>
#include <math.h>
#include "benchmark.h"

void eig(float *v, float *A, float *u, size_t n, unsigned iters) {
    /* TODO: write a faster version of eig */
    eig_naive(v, A, u, n, iters);
}
