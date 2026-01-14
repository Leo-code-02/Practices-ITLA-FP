#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
    int n1, n2, n3, n4, ef;
    double promedio, nf;
    const double pdn = 0.70, pde = 0.30; // 70% para notas, 30% para examen   //(pn) porciento de notas      (pe) porciendo de examen     

    cout << "Ingrese la primera nota del estudiante: ";
    cin >> n1;
    cout << "Ingrese la segunda nota del estudiante: ";
    cin >> n2;
    cout << "Ingrese la tercera nota del estudiante: ";
    cin >> n3;
    cout << "Ingrese la cuarta nota del estudiante: ";
    cin >> n4;

    // Cálculo del promedio
    promedio = (n1 + n2 + n3 + n4) / 4.0;

    cout << "\nEl promedio de todas las notas es: " << promedio << endl;

    // Entrada de la nota del examen final
    cout << "\nAhora ingrese la nota del examen final: ";
    cin >> ef;

    // Cálculo de la nota final
    nf = (promedio * pdn) + (ef * pde);

    // Mostrar la nota final
    cout << "\nLa nota final del estudiante es: " << nf << endl;

    // Determinar si el estudiante aprobó o reprobó
    if (nf < 70) {
        cout << "Estudiante reprobado." << endl;
    }
    else {
        cout << "Estudiante aprobado." << endl;
    }

    system("pause");
    return 0;
}
