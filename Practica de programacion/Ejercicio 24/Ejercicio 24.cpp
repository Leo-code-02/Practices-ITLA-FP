#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
	int num, z = 0, x = 1, y = 1;

	cout << "Ingrese la cantidad de elementos: ";
	cin >> num;
	cout << "1 ";

	for (int i = 1; i < num; i++) {
		x = z + y;//1 2 3 5
		cout << x << " ";//1 2 3 5
		z = y;//1 1 2
		y = x;//1 2 3 

	}
	cout << "\n";
	system("pause");
	return 0;
}

