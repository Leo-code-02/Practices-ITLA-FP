#include <iostream>
#include <string>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main() {
    string palabra = "HOLA";
    char letra = 'L';

    cout << "'HOLA'" << endl;

    // Usamos el método find() para buscar la letra en la cadena.
    // El índice devuelto es basado en 0.
    size_t pos = palabra.find(letra);

    if (pos != string::npos) {
        // Si se desea mostrar la posición contando desde 1, se suma 1.
        cout << "\nLa letra '" << letra << "' se encuentra en la posicion " << pos + 1 << " (contando desde 1)." << endl;
    }
  
    system("pause");
    return 0;
}

