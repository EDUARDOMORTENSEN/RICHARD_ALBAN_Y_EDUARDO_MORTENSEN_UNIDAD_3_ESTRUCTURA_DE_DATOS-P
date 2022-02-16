#include<iostream>
#include <time.h>
#include "Funcion2.h"
using namespace std;

int main()
{
    int a, b, m;
    float tiem;
    a = clock();
    Funciones2<int> obj2;
    obj2.calcular();
    obj2.ingresar_a_web();
    b = clock();
    m = b - a;
    tiem=((float)m);
    cout <<"El tiempo transcurrido fue: " <<tiem<<endl;

}
