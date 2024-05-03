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

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriz 1";
            cout << "Ingresa un numero, fila  "<< i+1 << ", columna "<< j+1 <<":" << endl;
            cin >> matriz1[i][j];
        }
        cout << endl;
    }
    cout << endl;


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriz 2";
            cout << "Ingresa un numero, fila  "<< i+1 << ", columna "<< j+1 <<":" << endl;
            cin >> matriz2[i][j];
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz1[i][j];
            
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz2[i][j];
            
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultado[i][j]= matriz1[i][j]*matriz2[i][j];
            cout << resultado[i][j];
        }
        cout << endl;
    }
    cout << endl;
        
    return 0;
}
