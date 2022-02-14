
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Sudoku {
private:
    int **matriz;
    int detente;
    int aleatorio;
    int contador1;
    int contador2;
public:
    int** inicializar(int);
    void tablero(int**);
    int** hacerSolucion(int**);
    int controlar(int, int, int, int, int**);
};
