/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include<iostream>
using namespace std;

int main() {
    int n, sum;

    cout << "Enter the value of n: ";
    cin >> n;

    sum = (n * (n + 1)) / 2;

    cout << "The sum of natural numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}


