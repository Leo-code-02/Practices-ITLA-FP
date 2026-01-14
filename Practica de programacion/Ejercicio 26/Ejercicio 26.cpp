#include <iostream>
using namespace std;
// Leandro Leguisamo Garcia 2024-2580

int main() {
    int anio;

    cout << "Ingrese un anio para verificar si es bisiesto: ";
    cin >> anio;

    // Verificación de año bisiesto
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << "\nEl anio " << anio << " es bisiesto." << endl;
    }
    else {
        cout << "\nEl anio " << anio << " no es bisiesto." << endl;
    }
    system("pause");
    return 0;
}


