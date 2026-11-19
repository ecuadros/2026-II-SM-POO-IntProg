#include <iostream>
#include "Demos.h"
#include "aritmetica.h"
#include "types.h"
using namespace std;

// Implementacion
void DemoFuncionesMatematicas(){
    T1 x = 10;
    T1 y = 3;

    cout << "SumaF: " << suma(x, y) << endl;
    cout << "RestaF: " << resta(x, y) << endl;
    cout << "MultiplicaciónF: " << multiplicacion(x, y) << endl;
    cout << "DivisiónF: " << division(x, y) << endl;
    cout << "MóduloF: " << modulo(x, y) << endl;
    cout << "Negativo: "<< neg(x)<<endl;

    T2 a = -5;
    T2 b = 2;
    cout << "SumaQ: " << suma(a, b) << endl;

    TS str1 = "Hola, ";
    TS str2 = "Mundo!";
    cout << "SumaS: " << suma(str1, str2) << endl;

    // Extra usando los templates
    T2 c = 23.4;
    T2 d =-83.91;
    cout << "SumaF2: " << suma(c,d) << endl;
    cout << "RestaF2: " << resta(c,d) << endl;
    cout << "MultiplicaciónF2: " << multiplicacion(c,d) << endl;
    cout << "DivisiónF2: " << division(c,d) << endl;
    cout << "Negativo de c: "<< neg(c)<<endl;
    cout << "Negativo de d: "<< neg(d)<<endl;
    //prueba con divisor igual a 0
    T2 e = 23.4;
    T2 f =0;
    cout << "DivisiónF2: " << division(e,f) << endl;
}