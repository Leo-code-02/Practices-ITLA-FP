#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
    int num;

    cout << "Ingrese el numero: ";
    cin >> num;
    
    if (num >= 0) {
        cout << "\nEl numero es positivo" << endl;
    }

    else if (num <= 0) {
        cout << "\nEl numero es negativo" << endl;
    }

    system("pause");
    return 0;
}

