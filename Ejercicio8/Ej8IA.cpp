/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; // tamaño del vector
    cout << "Ingresa la longitud de los vectores:" << endl;
    cin >> n;

    vector<int> vector1(n);
    vector<int> vector2(n);
    int productoPunto = 0;

    cout << "Ingresa los elementos del Vector 1:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vector1[i];
    }

    cout << "Ingresa los elementos del Vector 2:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vector2[i];
    }

    for (int i = 0; i < n; i++) {
        productoPunto += vector1[i] * vector2[i];
    }

    cout << "El producto punto de los dos vectores es: " << productoPunto << endl;

    return 0;
}
