#include <iostream>   
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

struct RangoNumeros {
    int inicio; // Límite inferior del rango
    int fin;    // Límite superior del rango

    
    void mostrarNumeros() {
        for (int i = inicio; i <= fin; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    // Creamos una variable de tipo RangoNumeros
    RangoNumeros rango;

    
    rango.inicio = 40;
    rango.fin = 70;

    // Llamamos al método para mostrar los números
    cout << "Numeros entre " << rango.inicio << " y " << rango.fin << ":" << endl;
    rango.mostrarNumeros();

    system("pause");
    return 0;
}


