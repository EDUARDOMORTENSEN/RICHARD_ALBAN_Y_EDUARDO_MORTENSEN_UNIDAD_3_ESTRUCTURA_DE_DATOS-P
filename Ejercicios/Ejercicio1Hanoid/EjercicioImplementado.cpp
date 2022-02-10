#include<iostream>
#include"Proceso.h"
#include <time.h>

using namespace std;

void tiempoProc1(void)
{
	int inicio, fin, t;
    float tiempoSeg;
    inicio = clock();
    Pascal<int> c1;
    int z;
    cout<<"Ingrese el valor: "<<endl;
    cin>>z;
     for(int i=z; i>=0; i--)
    {
        for(int ii=0; ii<=i; ii++)
            cout << c1.combinacion(i, ii) << "  ";
        cout << endl;
    }
    fin = clock();
    t = fin - inicio;
    tiempoSeg=((float)t);
    cout << endl<<"El tiempo transcurrido fue: " << tiempoSeg<<endl;
}

int main(){
    tiempoProc1();

    return 0;
}
