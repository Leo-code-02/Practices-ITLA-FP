#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580 #13


    //Definicion de la estructura de numeros
struct Numeros {
    int num1; //primer valor
    int num2; //segundo valor
    int suma; //Almacena la suma de num1 y num2

    // Método para calcular la suma de los dos números
    void calcularSuma() {
        suma = num1 + num2;
    }

};

int main() {

    Numeros n;

    cout << "Ingrese el primer numero: ";
    cin >> n.num1;
    cout << "Ingrese el segundo numero: ";
    cin >> n.num2;

    n.calcularSuma();

    if (n.suma % 2 == 0) {
        cout <<"\nLa suma " << n.suma << " es par " << endl;
    }
    else {
        cout << "La suma " << n.suma << " es impar " << endl;
    }

    system("pause");
    return 0;

}
