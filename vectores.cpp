#include "vectores.h"

void DemoFuncionesVectoriales (){
    const int tam = 10;
    T1 vec[tam] = {3, 7, 8};
    print(vec, tam, cout);

    ofstream of("salida.txt");
    of << "Hola" << endl;
    print(vec, tam, of);

    T2 v2[6] = {3.14, 8.9};
    print(v2, 5, cout);

}