#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main() {
    double fahrenheit, celsius;

    cout << "Ingrese la temperatura celsius: ";
    cin >> celsius;

    // Fórmula para convertir Fahrenheit a Celsius
    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Los grados fahreheit son: " << fahrenheit << endl;

    system("pause");
    return 0;
}
