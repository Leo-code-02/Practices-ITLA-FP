#include <iostream>
using namespace std;
// Leandro Leguisamo Garcia 2024-2580

int main() {
    int x, y, temp;

    cout << "Ingrese el valor de (x) : ";
    cin >> x;

    cout << "Ingrese el valor de (y) : ";
    cin >> y;

    // Intercambiar valores
    temp = x;
    x = y;
    y = temp;

    // Mostrar resultado
    cout << "\nEl nuevo valor de (x) es: " << x << endl;
    cout << "El nuevo valor de (y) es: " << y << endl;

    
    system("pause");

    return 0;
}


