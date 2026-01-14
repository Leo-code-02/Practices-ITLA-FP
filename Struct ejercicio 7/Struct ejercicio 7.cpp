#include <iostream>   
using namespace std;
//Leandro Leguisamo Garcia 2024-2580


struct Numero {
    int valor; 

    // Método para determinar si el número es par
    bool esPar() {
        return valor % 2 == 0; // Si el residuo de la división entre 2 es 0, es par
    }
};

int main() {
    
    Numero num;

   
    cout << "Ingrese un numero: ";
    cin >> num.valor;


    if (num.esPar()) {
        cout << "El numero " << num.valor << " es par." << endl;
    }
    else {
        cout << "El numero " << num.valor << " es impar." << endl;
    }

    system("pause");
    return 0;
}
