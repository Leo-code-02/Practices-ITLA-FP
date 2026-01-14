#include <iostream>
#include <cstdlib>

using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
 
	float a, b, c, p;
	cout << "Dame tu primera calificacion: ";
	cin >> a;
	cout << "Dame tu segunda calificacion: ";
	cin >> b;
	cout << "Dame tu tercera calificacion: ";
	cin >> c;

	p = (a + b + c) / 3;

	cout << " Tu promedi es de: " << p << endl;

	if (p >= 6) {
		cout << "Aprovaste la materia" << endl;
	}
	else {
		cout << "Reprobaste la materia " << endl;
	}

	return 0;
	system("pause");

}

