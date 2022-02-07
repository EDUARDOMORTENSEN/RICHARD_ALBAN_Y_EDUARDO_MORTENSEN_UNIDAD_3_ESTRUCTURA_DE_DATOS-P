/******  Universidad de las Fuerzas Armadas ESPE  *******                            *
 *				Carrera: Software													 *
 *				Autores: Eduardo Mortensen, Richard Alban,							 *
 *				Fecha de creación: 27/10/2021										 *
 *				Fecha de modificación: 4/11/2021									 *
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
