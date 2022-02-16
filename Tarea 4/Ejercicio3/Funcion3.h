#ifndef FUNCION3_H_INCLUDED
#define FUNCION3_H_INCLUDED
#include "cmath"
#include "math.h"
#include <fstream>
using namespace std;
template <class T>

class Funcion3{

public:
     factorial(T);
     calcular();
     ingresar_a_web();
};
template <class T>
Funcion3<T>::factorial(T a)
{
    float fa,fac,i;
    fa=1;
    if(a<0) fa =0;
    else if(a==0) fa=1;
    else{
            for (i = 1; i <= a; i++){
                return fa*i;                                    }
        }
}
template <class T>
Funcion3<T>::calcular()
{
    ofstream file;
    file.open("Ejercicio2.txt");
    double resul[30];
    cout<<"calcular: [(9^2)+5^(n+1)!]/[(n!)+(9^n)+n] = "<<endl;
    for (int n=0;n<=5;n++)
    {
        resul[n]=((pow(9,2)+5*factorial(n+1))/(factorial(n)+pow(9,n)+n));
        cout<<n<<"\t"<<resul[n]<<endl;
        file<<n<<"\t"<<resul[n]<<endl;

    }

    file.close();
 }
 template <class T>
Funcion3<T>::ingresar_a_web(){
    cout << "Presione enter para abrir Octave Online" << endl;
    system("pause>null");
    system("start https://octave-online.net/");
    cout << "Presione enter para salir" << endl;
    return 0;
}
#endif // FUNCION3_H_INCLUDED
