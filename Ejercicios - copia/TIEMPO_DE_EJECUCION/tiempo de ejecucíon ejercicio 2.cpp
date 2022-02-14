#include<iostream>
#include <time.h>
#include<chrono>

using namespace std;
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

struct Temporizador
{

    std::chrono::system_clock::time_point inicio;

    Temporizador()
    {
        inicio=std::chrono::system_clock::now();
    }
    ~Temporizador(){
    auto finall=std::chrono::system_clock::now();

    std::chrono::duration<float> duracion=finall-inicio;
    std::cout <<duracion.count()<<"s"<<std::endl;
    }
};

int triangulo_de_Pascal(){
Pascal<int> c1;
    int z;
    cout<<"Ingrese el valor: "<<endl;
    cin>>z;
     for(int i=0; i<=z; i++)
    {
        for(int ii=0; ii<=i; ii++)
            cout << c1.combinacion(i, ii) << "  ";
        cout << endl;
    }
}

int programa(){
Temporizador t;
triangulo_de_Pascal();
}

int main(){
 programa();
 getchar();
return 0;
}
