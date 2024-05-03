/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int matriz1[3][3];
    int matriz2[3][3];

    // Read the input matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriz 1";
            cout << "Ingresa un numero, fila  " << i+1 << ", columna " << j+1 << ":" << endl;
            cin >> matriz1[i][j];
        }
        cout << endl;
    }

    // Calculate the transposed matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz2[i][j] = matriz1[j][i];
        }
    }

    // Print the transposed matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz2[i][j];
        }
        cout << endl;
    }

    return 0;
}