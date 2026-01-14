#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main() {

	double num1, num2;

	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	if (num1 == num2) {
		cout << "Los numeros ingresados son iguales." << endl;
	}
	else if (num1 != num2) {
		cout << "Los numeros ingresados son distintos." << endl;
	}

	if (num1 > num2) {
		cout << "El primer numero es mayor que el segundo." << endl;
	} 
	else if (num1 < num2) {
		cout << "El primer numero es menos que el segundo." << endl;
	}

	return 0;
}

