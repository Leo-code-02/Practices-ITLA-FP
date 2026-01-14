#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main() {
	int minutos, anos;

	cout << "Ingrese la cantidad de anos que quiere convertir a minutos: ";
	cin >> anos;

	minutos = anos * 525600;

	cout << "\nEl equivalente en minutos de: " << anos << " anos es: " << minutos << " minutos " << endl;

	system("pause");
	return 0;
   
}

