#ifndef __ARITMETICA_H__
#define __ARITMETICA_H__
#include<iostream>
#include "types.h"

template <typename T>
T suma(T a, T b) {
    return a + b;
}

template <typename T>
T resta(T a, T b){
    return a - b;
}
template <typename T>
T multiplicacion(T a, T b){
    return a * b;
}
template <typename T>
T division(T a, T b){
    if (b==0) {
    cerr<<"Error: No se puede dividir por 0";
    return 0;
    }
    else return a / b;
}
template <typename T>
T modulo(T a, T b){
    return a % b;
}
template <typename T>
T neg (T a){
    return -a;
}


#endif // __ARITMETICA_H__
