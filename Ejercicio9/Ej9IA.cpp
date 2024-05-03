/*. Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int matriz1[3][3];
    int matriz2[3][3];
    int resultado[3][3];

    // Input for Matriz 1
    cout << "Input for Matriz 1:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingresa un numero, fila  " << i+1 << ", columna " << j+1 << ":" << endl;
            cin >> matriz1[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // Input for Matriz 2
    cout << "Input for Matriz 2:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingresa un numero, fila  " << i+1 << ", columna " << j+1 << ":" << endl;
            cin >> matriz2[i][j];
        }
        cout << endl;
    }
    cout << endl;

    // Print Matriz 1
    cout << "Matriz 1:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Print Matriz 2
    cout << "Matriz 2:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Matrix Multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultado[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // Print Resultado
    cout << "Matriz Resultado:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}