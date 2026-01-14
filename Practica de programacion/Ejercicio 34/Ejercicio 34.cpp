#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main() {
    int numeros[20]; // Array para almacenar los 20 números

    cout << "Ingrese 20 numeros:\n";
    for (int i = 0; i < 20; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Mostrar los números positivos
    cout << "\nNumeros positivos ingresados:\n";
    for (int i = 0; i < 20; i++) {
        if (numeros[i] > 0) {
            cout << numeros[i] << " ";
        }
    }
    cout << endl;

    system("pause");
    return 0;
}

