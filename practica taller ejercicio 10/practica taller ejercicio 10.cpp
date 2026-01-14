#include <iostream>
#include <string>
using namespace std;
//Leandro Leguisamo Garcia 20204-2580

int main() {

	string oracion;
	int contadorPalabras = 0;

	cout << "Escriba una oracion: ";
	getline(cin, oracion);

    bool enPalabra = false;
    for (char caracter : oracion) {
        if (caracter != ' ' && !enPalabra) {
           
            contadorPalabras++;
            enPalabra = true;
        }
        else if (caracter == ' ') {
           
            enPalabra = false;
        }
    }
    cout << "El numero de palabras en la oracion es: " << contadorPalabras << endl;

    return 0;


}

 