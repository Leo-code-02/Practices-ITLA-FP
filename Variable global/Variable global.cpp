#include <iostream>
using namespace std;
// Leandro Leguisamo Garcia 2024-2580


// se declara x como global.
int x = 1;

void funcion () ;

int main()
{
	cout << x << endl; // muestra 1
	x++;
	cout << x << endl; // muestra 2
	
	// se llama a una funcion que acee a la variable global x
	funcion();

	cout << x << endl; //muestra 4
	system("pause");
}

void funcion()

{
	//la funcion tiene acceso a la variable global x
	x = x * 2;
}

