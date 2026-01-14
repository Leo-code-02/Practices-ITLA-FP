#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
    int horasTrabajadas;
    float costoHora;
    float sueldo;
    cout << " Ingrese Horas trabajadas por el operario: ";
    cin >> horasTrabajadas;
    cout << "ingrese el pago por hora: ";
    cin >> costoHora;
    sueldo = horasTrabajadas * costoHora;
    cout << "El sueldo total del operario es: ";
    cout << sueldo;

    return 0;

}

