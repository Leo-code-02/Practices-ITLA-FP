#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main() {

	double ancho, altura, area;

	cout << "Vamos a calcular el area de una rectangulo. " << endl;

	cout << "Ingrese la altura del rectangulo: ";
	cin >> altura;

	cout << "Ingrese el ancho del rectangulo: ";
	cin >> ancho;

	area = ancho * altura; 

	cout << "El area de su rectangulo es: " << area;

	return 0;
}

