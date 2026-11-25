#include <iostream>
#include <fstream>
#include <cstddef>
using namespace std;

// Imprime los n elementos de un arreglo en el flujo de salida os
template <typename T>
void print(T v[], size_t n, ostream &os)
{
    for (size_t i = 0; i < n; ++i)
        os << v[i] << " " << endl;
}

int main()
{
    // Versión sin plantilla
    int v[10] = {3, 7, 8};
    for (int i = 0; i < 10; i++)
        cout << v[i] << endl;

    // Plantilla con int (T1 = int)
    const int tam = 10;
    int vec[tam] = {3, 7, 8};
    print(vec, tam, cout);

    // Salida a archivo
    ofstream of("salida.txt");
    of << "Hola" << endl;
    print(vec, tam, of);

    // Plantilla con double (T2 = double)
    double v2[5] = {3.14, 8.9};
    print(v2, 5, cout);

    return 0;
}