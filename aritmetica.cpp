#include <iostream>
#include "aritmetica.h"
using namespace std;

T suma(T a, T b) {
    return a + b;
}

T resta(T a, T b) {
    return a - b;
}

T multiplicacion(T a, T b) {
    return a * b;
}

T division(T a, T b) {
    if (b == 0) {
        cerr << "Error: División por cero." << endl;
        return 0; // O manejar el error de otra manera
    }
    return a / b;
}

T modulo(T a, T b) {
    if (b == 0) {
        cerr << "Error: Módulo por cero." << endl;
        return 0; // O manejar el error de otra manera
    }
    return a % b;
}

T neg(T a){
    return -a;
}