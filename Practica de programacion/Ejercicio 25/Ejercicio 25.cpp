#include <iostream>
#include <cmath>
using namespace std;
// Leandro Leguisamo Garcia 2024-2580

int main()
{
    double a, b, c, discriminante, x1, x2;

    cout << "Ingrese el valor de (a) en la formula general: ";
    cin >> a;

    if (a == 0) {
        cout << "Error: 'a' no puede ser 0 en una ecuacion cuadratica." << endl;
        return 1; // Termina el programa con un código de error
    }

    cout << "Ingrese el valor de (b) en la formula general: ";
    cin >> b;

    cout << "Ingrese el valor de (c) en la formula general: ";
    cin >> c;

    discriminante = (b * b) - (4 * a * c);


    if (discriminante < 0) {
        cout << "La ecuacion no tiene soluciones reales (discriminante negativo)." << endl;
    }
    else if (discriminante == 0) { // Una única raíz real
        x1 = -b / (2 * a);
        cout << "La ecuacion tiene una unica solucion: x = " << x1 << endl;
    }
    else { // Dos soluciones reales
        x1 = (-b + sqrt(discriminante)) / (2 * a);
        x2 = (-b - sqrt(discriminante)) / (2 * a);

        cout << "\nLas soluciones son:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    system("pause");
    return 0;
}




