/******  Universidad de las Fuerzas Armadas ESPE  *******                            *
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *				Fecha de creación: 7/2/2022										 *
 *				Fecha de modificación: 7/2/2022									 *
 *****************************/
#include<iostream>
#include"Proceso.h"
using namespace std;

int main(){
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

    return 0;
}
