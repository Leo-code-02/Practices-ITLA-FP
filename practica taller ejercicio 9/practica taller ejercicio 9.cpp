#include <iostream>
using namespace std;
//Leandro Leguisamo Garcoa 2024-2580

int main() {

	int edad;
	string permiso;

	cout << "Cual es su edad? ";
	cin >> edad;

	cout << "Tiene algun permiso de conducir? (si/no): ";
	cin >> permiso;

	if (edad >= 18 && permiso == "si") {
		cout << "Aprobado, usted puede conducir un auto. " << endl;
	}
	else if (edad >= 18 && permiso != "si") {
		cout << "Denegado, usted no tiene permiso de conducir. " << endl;
	} 
	else {
		cout << "Denegado usted es menos de edad. ";
	}

	return 0;
}

