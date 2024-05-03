/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>

using namespace std;

int main() {
    const int numEstudiantes = 10;
    int puntajes[numEstudiantes];
    double promedio = 0;

    cout << "Ingrese los puntajes de los " << numEstudiantes << " estudiantes:" << endl;
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "Puntaje del estudiante " << i + 1 << endl;
        cin >> puntajes[i];
    }

    double suma = 0;
    for (int i = 0; i < numEstudiantes; i++) {
        suma += puntajes[i];
    }

    promedio = (suma) / numEstudiantes;

    cout << "El promedio general de la seccion es: " << promedio << endl;

    return 0;
}



