#include <iostream>
using namespace std;
// Leandro Leguisamo Garcia 2024-2580

int main() {
    double numero, doble, cubo, mitad; 

    
    cout << "Ingrese un numero: ";
    cin >> numero;

   
    doble = numero * 2; 
    cubo = numero * numero * numero;
    mitad = numero / 2; 

    cout << "\nEl doble del numero ingresado es: " << doble << endl;
    cout << "El cubo del numero ingresado es: " << cubo << endl;
    cout << "La mitad del numero ingresado es: " << mitad << endl;

    system("pause");
    return 0;
}

