#include <iostream>   
using namespace std;
//Leandro Leguisamo Garcia 2024-2580


struct Numeros {
    int inicio; 
    int fin;    

    // Método para mostrar los números en el rango especificado
    void mostrarNumeros() {
        for (int i = inicio; i <= fin; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    // Creamos una variable de tipo Numeros
    Numeros numeros;

    // Asignamos los valores fijos al rango
    numeros.inicio = 1;
    numeros.fin = 100;

    // Llamamos al método para mostrar los números
    cout << "Numeros del " << numeros.inicio << " al " << numeros.fin << ":" << endl;
    numeros.mostrarNumeros();

    system("pause");
    return 0;
}
