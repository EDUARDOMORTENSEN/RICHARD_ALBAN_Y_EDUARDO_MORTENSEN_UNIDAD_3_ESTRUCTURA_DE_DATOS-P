#ifndef FUNCION2_H_INCLUDED
#define FUNCION2_H_INCLUDED
#include "cmath"
#include <fstream>
#include "math.h"
using namespace std;
template <class T>

class Funciones2{

public:
     factorial(T);
     calcular();
};
template <class T>
Funciones2<T>::factorial(T n)
{
    if(n<2)
        return 1;
    else
        return n * factorial(n-1);
}
template <class T>
Funciones2<T>::calcular()
{
    ofstream file;
    file.open("Ejercicio2.txt");
    double r[30];
    float h;
    cout<<"Ingrese hasta que rango quiere calcular la exprecion"<<endl;
    cin>>h;
    cout<<"calcular: (7*n!+2*n^(1/2))/(n+n!)"<<endl;

    for (int z=0;z<=h;z++)
    {
        r[z]=((7*factorial(z)+2*pow(z,1/2))/(z+factorial(z)));
        cout<<z<<"\t"<<r[z]<<endl;
        file<<z<<"\t"<<r[z]<<endl;

    }
    file.close();
}

#endif // FUNCION2_H_INCLUDED
