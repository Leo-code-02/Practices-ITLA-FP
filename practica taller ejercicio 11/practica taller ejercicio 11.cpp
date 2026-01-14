#include <iostream>
#include <string>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main() {

	string palabra1, palabra2;

	cout << "Igrese la primera palabra: ";
	cin >> palabra1;

	cout << "Igrese la segunda palabra: ";
	cin >> palabra2;

	// Invertir las palabras usando reverse()
	reverse(palabra1.begin(), palabra1.end());
	reverse(palabra2.begin(), palabra2.end());

	cout << "La primera palabra invertida es: " << palabra1 << endl;
	cout << "La segunda palabra invertida es: " << palabra2 << endl;

	return 0;
}
