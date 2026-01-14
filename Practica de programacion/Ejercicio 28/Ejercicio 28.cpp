#include <iostream>
#include <string>  
using namespace std;
// Leandro Leguisamo Garcia 2024-2580

int main() {

    string palabra;  

    cout << "Ingrese una palabra: ";
    cin >> palabra;  

    // Mostrar la cantidad de caracteres
    cout << "\nLa palabra '" << palabra << "' tiene " << palabra.length() << " caracteres." << endl;

    system("pause");
    return 0;
}

