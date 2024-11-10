#include "../inc/libmx.h"

double mx_pow(double n, unsigned int pow) {
    double res = 1;

    while (pow--) {
        res *= n;
    }

    return res;
}

