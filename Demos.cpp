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
    cout << "RestaQ: " << resta(a, b) << endl;
    cout << "MultiplicaciónQ: " << multiplicacion(a, b) << endl;
    cout << "DivisiónQ: " << division(a, b) << endl;
    cout << "NegativoQ: " << neg(a) << endl;

    TS str1 = "Hola, ";
    TS str2 = "Mundo!";
    cout << "SumaS: " << suma(str1, str2) << endl;
}