/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numPares;
    int suma = 0;
    for (int i = 100; i <= 200; i+=2)
    {
        numPares = i;
        suma += numPares;
    }

    cout << "La suma de los numeros pares del 100 al 200 es de:" << suma << endl;
    
    return 0;
}


