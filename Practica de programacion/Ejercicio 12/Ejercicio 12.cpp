#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
	int num1, num2;

	cout << "Ingrese el primer numero: ";
	cin >> num1;

	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	if (num1 > num2) {
		cout << "\nEste es el numero mayor: " << num1 << endl;
	}
	else {

		cout << "\nEste es el numero mayor: " << num2 << endl;
	}

	system("pause");
	return 0;
}

