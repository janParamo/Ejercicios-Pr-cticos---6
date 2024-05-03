/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include <iostream>

using namespace std;

int main() {

    int vector1[3];
    int vector2[3];
    int productoPunto = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "Vector 1 " << endl;
        cout << "Dime un numero" << i + 1 << ":" << endl;
        cin >> vector1[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Vector 2 " << endl;
        cout << "Dime un numero" << i + 1 << ":" << endl;
        cin >> vector2[i];
    }


    for (int i = 0; i < 3; i++) {
        productoPunto += vector1[i] * vector2[i];
    }

    cout << "El producto punto de los dos vectores es: " << productoPunto << endl;

    return 0;
}


