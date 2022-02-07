#include<iostream>
using namespace std;
template <class T>
class Pascal{
public:
    factorial(T);
    T factorial();
    combinacion(T,T);
    T combinacion();
    Triangulo_de_pascal();
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

int main(){
    Pascal<int> c1;
     for(int i=0; i<=10; i++)
    {
        for(int ii=0; ii<=i; ii++)
            cout << c1.combinacion(i, ii) << "  ";
        cout << endl;
    }

    return 0;
}
