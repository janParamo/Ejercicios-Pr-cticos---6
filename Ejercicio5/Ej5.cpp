/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

#include<iostream>

using namespace std;

main()
{
    const int numEstudiantes = 8;
    int puntajes[numEstudiantes];
    double promedio = 0;
    int aprobados = 0;
    int reprobados = 0;

    cout << "Ingrese los puntajes de los " << numEstudiantes << " estudiantes:" << endl;

    for (int i = 0; i < numEstudiantes; i++)
    {
        cout << "Puntaje del estudiante" << i + 1 << ":" << endl;
        cin >> puntajes[i];
        
        
        if (puntajes[i] >= 70)
        {
        aprobados++; 
        } else
        {
        reprobados++;
        }

        promedio += puntajes[i];
    }

    promedio /= numEstudiantes;
    

    cout << "La cantidad de alumnos aprobados es de:" << aprobados << endl;
    cout << "La cantidad de alumnos reprobados es de:" << reprobados << endl;
    cout << "El promedio general del grupo es de:" << promedio << endl;

    return 0;
}
