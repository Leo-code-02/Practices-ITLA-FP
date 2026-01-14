#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
    int num;

    cout << "Introduzca un numero para calcular la tabla: ";
    cin >> num;

    for (int i = 1; i <= 12; i++) {
        cout << num << " x " << i << " = " << num * i << endl;

    }

    system("pause");
    return 0;

}

