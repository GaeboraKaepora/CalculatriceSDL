//
// Created by colli on 16/04/2026.
//

#include "../header/operations.h"
#include <math.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int sq(int a, int n) {
    int res = a;
    for (int i = 1; i < n; i++) {
        res = a * res;
    }
    return res;
}

double sqroot(double x) {
    if (x < 0) return -1.0;
    if (x == 0) return 0.0;
    double s = x;
    double s0;
    do {
        s0 = s;
        s = 0.5 * (s0 + x / s0);
    } while (fabs(s - s0) > 1e-15);
    return s;
}