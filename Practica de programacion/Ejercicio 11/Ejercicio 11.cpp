#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
    int numero;


    cout << "Ingrese un numero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "\nEl numero es par " << endl;
    }

    else {
        cout << "\nEl numero es impar. " << endl;
    }

    system("pause");
    return 0;
}
