#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main() {

	int numero;

	cout << "Ingrese un numero: ";
	cin >> numero;

	if (numero % 2 == 0) {
		cout << "El numero " << numero << " es par";
	}
	else {
		cout << "El numero " << numero << " es impar";
	}

	return 0;

}

