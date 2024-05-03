/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0;
    int n = 100;

    suma = (n * (n + 1) * (2 * n + 1)) / 6;

    cout << "La suma de los cuadrados de los num entre 1 y 100 es de:" << suma << endl;

    return 0;
}