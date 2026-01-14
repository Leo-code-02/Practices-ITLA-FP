#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
    int n1, n2, n3, promedio;

    cout << "Introduzca la primera nota: ";
    cin >> n1;

    cout << "Introduzca la segunda nota: ";
    cin >> n2;

    cout << "Introduzca la tercera nota: ";
    cin >> n3;

    promedio = (n1 + n2 + n3) / 3;


    cout << "\nEl promedio de sus calificaciones es: " << promedio << endl;

    system("pause");
    return 0;


}

