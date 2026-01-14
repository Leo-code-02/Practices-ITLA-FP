#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
	double num1, num2, resultado;
	char operacion;

	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Indique la operacion (+,-,*,/): ";
	cin >> operacion;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	switch (operacion) {
	case '+':
		resultado = num1 + num2;
		cout << "\nLa suma de " << num1 << " + " << num2 << " es " << resultado << endl;
		break;
	case '-':
		resultado = num1 - num2;
		cout << "\nLa resta de " << num1 << " - " << num2 << " es " << resultado << endl;
		break;
	case '*':
		resultado = num1 * num2;
		cout << "\nLa multiplicacion de " << num1 << " * " << num2 << " es " << resultado << endl;
		break;
	case '/':
		if (num1 || num2 == 0) {
			resultado = num1 / num2;
			cout << "\nLa division de " << num1 << " / " << num2 << " es " << resultado << endl;
		}
		else {
			cout << "\nError: No es posible dividir entre 0." << endl;
		}
		break;
	default:
		cout << "\nOperacion no valida." <<endl;
		break;
	}

	system("pause");
	return 0;

}

