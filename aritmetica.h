#ifndef __ARITMETICA_H__
#define __ARITMETICA_H__

#include "types.h"

template <typename T>
T suma(T a, T b) {
    return a + b;
}

template <typename T>
T resta(T a, T b) {
    return a - b;
}

template <typename T>
T multiplicacion(T a, T b) {
    return a * b;
}

template <typename T>
T division(T a, T b) {
    return a / b;
}

template <typename T>
T modulo(T a, T b) {
    return a % b;
}

template <typename T>
T neg(T a) {
    return -a;
}

#endif // __ARITMETICA_H__
