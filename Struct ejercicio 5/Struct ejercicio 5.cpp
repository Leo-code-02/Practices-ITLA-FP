#include <iostream>   
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

struct Numeros {
    int lista[20]; 

    // Método para leer los 20 números desde el teclado
    void leerNumeros() {
        cout << "Ingrese 20 numeros:" << endl;
        for (int i = 0; i < 20; i++) {
            cout << "Numero " << i + 1 << ": ";
            cin >> lista[i];
        }
    }

    // Método para mostrar los números positivos
    void mostrarPositivos() {
        cout << "\nNumeros positivos ingresados:" << endl;
        for (int i = 0; i < 20; i++) {
            if (lista[i] > 0) {
                cout << lista[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    // Creamos una variable de tipo Numeros
    Numeros numeros;

    // Llamamos a los métodos de la estructura
    numeros.leerNumeros();
    numeros.mostrarPositivos();

    system("pause");
    return 0;
}

