/******  Universidad de las Fuerzas Armadas ESPE  *******                            *
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *				Fecha de creación: 7/2/2022										 *
 *				Fecha de modificación: 7/2/2022									 *
 *****************************/
#include<iostream>
#include"Proceso.h"
using namespace std;
<<<<<<< HEAD
template <class T>
class Pascal{
public:
    factorial(T);
    T factorial();
    combinacion(T,T);
    T combinacion();
};
template <class T>
Pascal<T>::factorial(T n)
{
    if(n<2)
        return 1;
    else
        return n * factorial(n-1);
}
template <class T>
Pascal<T>::combinacion(T n, T r)
{
    if(r==1)
        return n;
    else
    {
        if(n==r)
            return 1;
        else
            return factorial(n) / (factorial(r) * factorial(n - r));
    }
}
=======
>>>>>>> 8aa5ca5778a3782a12690790bbcae2bcb951edc7

int main(){
    cout<<"ingrese el numero de filas"<<endl;
    int z;
    cin>>z;
    Pascal<int> c1;
<<<<<<< HEAD
=======
    int z;
    cout<<"Ingrese el valor: "<<endl;
    cin>>z;
>>>>>>> 8aa5ca5778a3782a12690790bbcae2bcb951edc7
     for(int i=z; i>=0; i--)
    {
        for(int ii=0; ii<=i; ii++)
            cout << c1.combinacion(i, ii) << "  ";
        cout << endl;
    }

    return 0;
}
