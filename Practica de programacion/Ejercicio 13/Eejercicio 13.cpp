#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
    int num1, num2, suma;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    suma = num1 + num2;

    if (suma % 2 == 0) {
        cout << "\nLa suma de " << num1 << " y " << num2 << " es " << suma << " y es PAR." << endl;
    }
    else {
        cout << "\nLa suma de " << num1 << " y " << num2 << " es " << suma << " y es IMPAR." << endl;
    }

    system("pause");
    return 0;

}

