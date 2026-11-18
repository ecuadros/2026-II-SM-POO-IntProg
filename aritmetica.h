#ifndef __ARITMETICA_H__
#define __ARITMETICA_H__

#include "types.h"

template <typename T>
T suma(T a, T b) {
    return a + b;
}
template <typename T>
T1 resta(T1 a, T1 b){
    return a-b
};
template <typename T>
T1 multiplicacion(T1 a, T1 b){
    return a*b;
};
template <typename T>
T1 division(T1 a, T1 b){
    if (b == 0) {
        cerr << "Error: División por cero." << endl;
        return 0;
    }
    return a / b;
};
template <typename T>
T1 modulo(T1 a, T1 b){
    if (b == 0) {
        cerr << "Error: Módulo por cero." << endl;
        return 0;
    }
    return a % b;
};
T1 neg(T1 a){
    return -a;
}
#endif // __ARITMETICA_H__
