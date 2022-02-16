#ifndef LIBRERIA_H_INCLUDED
#define LIBRERIA_H_INCLUDED
#include <fstream>
#include "cmath"
#include "math.h"
using namespace std;
template <class T>
class Funciones{

public:
     calcular();
     ingresar_a_web();
};
template <class T>
Funciones<T>::calcular()
{
    ofstream file;
    file.open("funcion.txt");
    double x, n;
    double valorx[100];
    cout<<"calcular: (x^2)+5*In(X+4)  "<<endl;
    for (int n=-1;n<=50;n++)
    {
        valorx[n]=pow(n,2)+5*log(n+4);
        cout<<n<<"\t"<<valorx[n]<<endl;
        file<<n<<"\t"<<valorx[n]<<endl;

    }
    file.close();

}
template <class T>
Funciones<T>::ingresar_a_web(){
cout << "Presione enter para abrir Octave Online" << endl;
 system("pause>null");
 system("start https://octave-online.net/");
 cout << "Presione enter para salir" << endl;
 return 0;
}
#endif // LIBRERIA_H_INCLUDED
