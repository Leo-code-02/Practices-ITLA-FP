#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{

	const double itbis = 0.18; // El 18% representado como 0.18
	double precio_inicial, precio_final, total_itbis;
	int cantidad;


	cout << "Ingrese el precio del producto: ";
	cin >> precio_inicial;

	cout << "Ingrese la cantidad de productos: ";
	cin >> cantidad;

	total_itbis = precio_inicial * cantidad * itbis;
	precio_final = (precio_inicial * cantidad) + total_itbis;

	cout << "\nSubtotal: " << (precio_inicial * cantidad) << endl;
	cout << "ITBIS (18%): " << total_itbis << endl;
	cout << "Total a pagar: " << precio_final << endl;


	system("pause");
	return 0;



}

