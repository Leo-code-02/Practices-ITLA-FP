#include <iostream> 
#include <string>    
//Leandro leguisamo Garcia 2024-2580
using namespace std;

// Definimos una estructura llamada 'Palabra'
struct Palabra {
    string texto;    // Variable para almacenar la palabra
    int longitud;    // Variable para almacenar la cantidad de caracteres

    // Método que calcula la longitud de la palabra usando la función size()
    void calcularLongitud() {
        longitud = texto.size();
    }
};

int main() {
    // Creamos una variable de tipo Palabra
    Palabra p;

    cout << "Introduce una palabra: ";
    cin >> p.texto; 

    // Llamamos al método de la estructura para calcular la longitud
    p.calcularLongitud();

    // Mostramos el resultado al usuario
    cout << "La palabra \"" << p.texto << "\" tiene " << p.longitud << " caracteres." << endl;

    system("pause");
    return 0;
}


