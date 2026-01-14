#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
	int num1, num2, resultado;

	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	if (num1 > num2) {
		resultado = num1 - num2;
		cout << "\nLa diferencia entre los numeros ingresados es: " << resultado << endl;
	}
	else {
		resultado = num1 + num2;
		cout << "\nLa suma entre los numeros ingresados es: " << resultado << endl;
	}

	system("pause");
	return 0;

}

