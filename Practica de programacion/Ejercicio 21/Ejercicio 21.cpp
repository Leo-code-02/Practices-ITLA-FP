#include <iostream>
#include <cmath> 
using namespace std;
// Leandro Leguisamo Garcia 2024-2580

int main() {

    double hipo, cat1, cat2;

    cout << "Ingrese el valor del primer cateto: ";
    cin >> cat1;

    cout << "Ingrese el valor del segundo cateto: ";
    cin >> cat2;

    
    hipo = sqrt((cat1 * cat1) + (cat2 * cat2));

    cout << "\nEl valor de la hipotenusa es: " << hipo << endl;

    system("pause");
    return 0;
}


