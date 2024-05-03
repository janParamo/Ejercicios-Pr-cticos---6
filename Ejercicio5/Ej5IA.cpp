/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo
Nota mínima para aprobar: 70*/

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    const int numEstudiantes = 8;
    std::vector<int> puntajes(numEstudiantes);
    double promedio = 0;
    int aprobados = 0;
    int reprobados = 0;

    std::cout << "Ingrese los puntajes de los " << numEstudiantes << " estudiantes:";

    for (int i = 0; i < numEstudiantes; i++)
    {
        std::cout << "Puntaje del estudiante" << i + 1 << ":";
        std::cin >> puntajes[i];

        promedio += puntajes[i];
    }

    promedio /= numEstudiantes;

    aprobados = std::count_if(puntajes.begin(), puntajes.end(), [](int score) { return score >= 70; });
    reprobados = numEstudiantes - aprobados;

    std::cout << "La cantidad de alumnos aprobados es de:" << aprobados;
    std::cout << "La cantidad de alumnos reprobados es de:" << reprobados;
    std::cout << "El promedio general del grupo es de:" << promedio;

    return 0;
}
