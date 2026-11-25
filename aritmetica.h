#ifndef __ARITMETICA_H__
#define __ARITMETICA_H__

#include <iostream>
#include "types.h"

using namespace std;

template <typename T>
T suma(T a, T b) {
    return a + b;
}

template <typename T>
T resta(T a, T b){
    return a - b
}

template <typename T>
T multiplicacion(T a, T b){
    return a * b
}

template <typename T>
T division(T a, T b){
    if (b == 0)
        cout <<"No se puede dividir por cero"<< endl;
    return a / b
}

template <typename T>
T neg(T a){
    return -a
}

#endif // __ARITMETICA_H__
