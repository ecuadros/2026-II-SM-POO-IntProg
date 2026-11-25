//vectores
#ifndef __VECTORES_H__
#define __VECTORES_H__

#include <iostream>
#include <cstddef> //para usar size_t
#include "types.h"
#include <fstream>
#include <ostream>
#include "Demos.h"
#include <fstream>
using namespace std; 

template <typename T>
void print(T v[], size_t n, ostream &os)
{
    for(size_t i=0; i<n; ++i)
        os << v[i] << " " << endl;
}
#endif // __VECTORES_H__