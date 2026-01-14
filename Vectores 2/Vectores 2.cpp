#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
	int numero[100], n;


	cout <<"Digite el numero de elementos que va a tener su arreglo: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Digite un numero: ";
		cin >> numero[i];//Aqui se guardan los elementos del vector
	}

	//Ahora mostramos los elemento con sus indices asociados

	for (int i = 0; i < n; i++) {
		cout << i << " -> " << numero[i]<<endl;
	}
	
	system("pause");
	return 0;

}
