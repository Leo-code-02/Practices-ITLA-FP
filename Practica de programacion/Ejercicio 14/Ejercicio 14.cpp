#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580
 
int main()
{
	double precio, dolares, pesos;

	cout << "Ingrese la cantidad de dolares que quiere convertir: ";
	cin >> dolares;

	precio = 61.97;
	pesos = dolares * precio;

	cout << "\nLa cantidad de: " << dolares << " dolares en pesos es: " << pesos << endl;

	return 0;

}
