#include<iostream>
#include <time.h>
#include <fstream>
#include "Libreria.h"
using namespace std;

int main()
{
    int inicio, fin, t;
    float tiempoSeg;
    inicio = clock();
    Funciones<float> obj;
    Funciones<char> obj1;
    obj.calcular();
    obj1.ingresar_a_web();
    fin = clock();
    t = fin - inicio;
    tiempoSeg=((float)t);
    cout << endl<<"El tiempo transcurrido fue: " << tiempoSeg<<endl;
}
