#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main() {

    int nota;

    //A=90-100; B=80-89; y C = 70-79;

    cout << "Ingrese la nota del estudiante: ";
    cin >> nota;

    // Determinar la calificación
    if (nota >= 90 && nota <= 100) {
        cout << "\nCalificacion: A" << endl;
    }
    else if (nota >= 80 && nota <= 89) {
        cout << "\nCalificacion: B" << endl;
    }
    else if (nota >= 70 && nota <= 79) {
        cout << "\nCalificacion: C" << endl;
    }
    else {
        cout << "Error: fuera del rango para calificación A, B o C." << endl;
    }

    system("pause");
    return 0;
}


