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
    obj.calcular();
    fin = clock();
    t = fin - inicio;
    tiempoSeg=((float)t);
    cout << endl<<"El tiempo transcurrido fue: " << tiempoSeg<<endl;
}
