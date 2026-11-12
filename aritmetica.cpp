#include <iostream>
#include "aritmetica.h"
using namespace std;


T1 resta(T1 a, T1 b) {
    return a - b;
}

T1 multiplicacion(T1 a, T1 b) {
    return a * b;
}

T1 division(T1 a, T1 b) {
    if (b == 0) {
        cerr << "Error: División por cero." << endl;
        return 0; // O manejar el error de otra manera
    }
    return a / b;
}

T1 modulo(T1 a, T1 b) {
    if (b == 0) {
        cerr << "Error: Módulo por cero." << endl;
        return 0; // O manejar el error de otra manera
    }
    return a % b;
}

T1 neg(T1 a){
    return -a;
}