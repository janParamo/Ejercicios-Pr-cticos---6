/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numImp;
    for (int i = 99; i >= 1; i -=2)
    {
        numImp= i;
        cout << numImp<< endl;
    }
    
    return 0;
}
