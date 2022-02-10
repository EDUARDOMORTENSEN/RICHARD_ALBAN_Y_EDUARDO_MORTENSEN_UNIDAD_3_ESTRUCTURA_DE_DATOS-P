#ifndef VALIDO_H_INCLUDED
#define VALIDO_H_INCLUDED
#include<iostream>
using namespace std;
template <class T>
class Alfil{
public:
    movimiento(T,T);
};
template <class T>
Alfil<T>::movimiento(T fAlfil, T cAlfil)
{
    for(int f;f<=8;f++)
    {
        for(int c=1;c<=8;c++)
        {
            if((f+c)==(fAlfil+cAlfil)||(f-c)==(fAlfil-cAlfil))
            {
                cout<<" * ";

            }
            else if((f+c)%2==0)
            {
                cout<<" B ";
            }
            else
            {
                cout<<" N ";
            }
        }cout<<endl;
    }
}

#endif // VALIDO_H_INCLUDED
