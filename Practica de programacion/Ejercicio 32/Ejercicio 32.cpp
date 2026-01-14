#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main() {
    double fahrenheit, celsius;

    cout << "Ingrese los grados Fahrenheit: ";
    cin >> fahrenheit;

    // Fórmula para convertir Fahrenheit a Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Los grados Celsius son: " << celsius << endl;

    system("pause");
    return 0;
}
