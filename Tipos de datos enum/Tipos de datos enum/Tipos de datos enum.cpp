#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
	enum Semana
	{Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
	Semana Dia;

	Dia = Domingo;
	cout << "El valor correspondinte a el primer enum es: " << Dia << endl;

	enum Estadocivil
	{Casado, Soltero, Viudo};

	Estadocivil Juan;
	Juan = Soltero;
	cout << "El valor correspondinte a el segundo enum es: " << Juan << endl;



}

