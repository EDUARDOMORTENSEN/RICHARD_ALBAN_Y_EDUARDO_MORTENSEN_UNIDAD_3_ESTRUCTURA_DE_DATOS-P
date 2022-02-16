#include<iostream>
#include <time.h>
#include <fstream>
#include "Funcion3.h"
using namespace std;

int main()
{
    int inicio, fin, t;
    float tiempoSeg;
    inicio = clock();
    Funcion3<int> obj;
    obj.calcular();
    obj.ingresar_a_web();
    fin = clock();
    t = fin - inicio;
    tiempoSeg=((float)t);
    cout << endl<<"El tiempo transcurrido fue: " << tiempoSeg<<endl;
}
