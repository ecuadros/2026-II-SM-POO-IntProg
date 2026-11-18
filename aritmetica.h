#ifndef __ARITMETICA_H__
#define __ARITMETICA_H__

#include "types.h"

template <typename T>
T suma(T a, T b) {
    return a + b;
}

T1 resta(T1 a, T1 b);
T1 multiplicacion(T1 a, T1 b);
T1 division(T1 a, T1 b);
T1 modulo(T1 a, T1 b);

T1 neg(T1 a);

#endif // __ARITMETICA_H__
