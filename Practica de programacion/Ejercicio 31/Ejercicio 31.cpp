#include <iostream>
using namespace std;

int main() {
    double capitalInicial, tasa, tiempo, capitalFinal;

    // Se solicita el capital inicial al usuario
    cout << "Ingrese el capital inicial: ";
    cin >> capitalInicial;

    // Se solicita la tasa de interés en porcentaje
    cout << "Ingrese la tasa de interes (en porcentaje): ";
    cin >> tasa;

    // Se solicita el tiempo (por ejemplo, en años)
    cout << "Ingrese el tiempo (en anios): ";
    cin >> tiempo;

    // Convertir la tasa de porcentaje a decimal (por ejemplo, 10% -> 0.10)
    tasa = tasa / 100.0;

    // Calcular el capital final usando la fórmula del interés simple:
    capitalFinal = capitalInicial * (1 + tasa * tiempo);

    // Mostrar el resultado
    cout << "\nEl capital final es: " << capitalFinal << endl;

    system("pause");
    return 0;
}

