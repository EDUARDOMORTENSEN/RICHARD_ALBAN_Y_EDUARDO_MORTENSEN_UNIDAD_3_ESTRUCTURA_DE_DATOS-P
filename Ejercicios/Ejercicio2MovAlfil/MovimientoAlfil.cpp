#include<iostream>
#include <time.h>
#include"Valido.h"
using namespace std;
int main()
{
	int inicio, fin, t;
    float tiempoSeg;
    inicio = clock();
    Alfil<int> a1;
    int fAlfil, cAlfil;
    cout<<"Ingrese la fila donde se encuentra el alfil"<<endl;
    cin>>fAlfil;
    cout<<"Ingrese la columna donde se encuentra el alfil"<<endl;
    cin>>cAlfil;
    a1.movimiento(fAlfil, cAlfil);
    fin = clock();
    t = fin - inicio;
    tiempoSeg=((float)t);
    cout << endl<<"El tiempo transcurrido fue: " << tiempoSeg<<endl;
    return 0;
}
