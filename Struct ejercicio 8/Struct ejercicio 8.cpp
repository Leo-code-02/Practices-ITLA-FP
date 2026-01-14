#include <iostream>   
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

struct Calificaciones {
    int nota1, nota2, nota3; 

    // Método que calcula el promedio y devuelve un número entero
    int calcularPromedio() {
        return (nota1 + nota2 + nota3) / 3; 
    }
};

int main() {
    
    Calificaciones calif;

    cout << "Ingrese la primera calificacion: ";
    cin >> calif.nota1;
    cout << "Ingrese la segunda calificacion: ";
    cin >> calif.nota2;
    cout << "Ingrese la tercera calificacion: ";
    cin >> calif.nota3;

    // Calculamos el promedio y mostramos el resultado
    cout << "El promedio entero de las calificaciones es: " << calif.calcularPromedio() << endl;

    system("pause");
    return 0;
}
