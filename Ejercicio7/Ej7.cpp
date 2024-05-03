/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/



#include <iostream>

using namespace std;

main()
{
    int array1[10];
    int array2[10];
    int array3[100];

    for (int i = 0; i < 5; i++)
    {
        cout << "Arreglo 1"<< endl;
        cout << "Dime un numero"<< endl;
        cin >> array1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Arreglo 2"<< endl;
        cout << "Dime un numero"<< endl;
        cin >> array2[i];

    }
    
    array3[0]= 0;

    for (int i = 1; i < 5; i++)
    {
        array3[i] = array3[i-1] + (array1[i-1]+array2[i-1]);
        cout << array3[i] << endl;

    }
    return 0;
}


