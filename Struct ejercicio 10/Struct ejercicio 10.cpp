#include <iostream>  
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

struct Estudiante {
    int nota1, nota2, nota3; 

    // Método para calcular el promedio de las tres notas
    int calcularPromedio() {
        return (nota1 + nota2 + nota3) / 3; 
    }

    // Método para determinar la calificación según el promedio
    char determinarCalificacion() {
        int promedio = calcularPromedio(); // Obtener el promedio
        if (promedio >= 90 && promedio <= 100) {
            return 'A';
        }
        else if (promedio >= 80 && promedio <= 89) {
            return 'B';
        }
        else if (promedio >= 70 && promedio <= 79) {
            return 'C';
        }
        else {
            return 'F'; // Si es menor a 70, se considera reprobado ('F')
        }
    }
};

int main() {
    
    Estudiante estudiante;
    
    cout << "Ingrese la primera nota: ";
    cin >> estudiante.nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> estudiante.nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> estudiante.nota3;

    // Calculamos el promedio y determinamos la calificación
    cout << "\nEl promedio del estudiante es: " << estudiante.calcularPromedio() << endl;
    cout << "La calificacion final es: " << estudiante.determinarCalificacion() << endl;

    system("pause");
    return 0;
}
