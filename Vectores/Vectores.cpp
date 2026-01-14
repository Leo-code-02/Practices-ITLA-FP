#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
   
	int numeros[] = { 1,2,3,4,5 };
	int suma = 0;

	for (int i = 0; i < 5; i++) {
		suma += numeros[i];
	}

	cout << "La suma de los elemento de los vectores es " << suma << endl;

	system("pause");
	return 0;

}


