#include <iostream>
using namespace std;
// Leandro Leguisamo Garcia 2024-2580

int main() {
    int numero, digito1, digito2;

    cout << "Ingrese un numero de dos digitos: ";
    cin >> numero;

    if (numero < 10 || numero > 99) {
        cout << "\nError: Debe ingresar un numero de dos digitos." << endl;
    }
    else {

        digito1 = numero / 10;
        digito2 = numero % 10;

        cout << "\nLa suma de los digitos es: " << (digito1 + digito2) << endl;
    }

    system("pause");
    return 0;
}
