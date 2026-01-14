#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
    char caracter;

    cout << "Ingrese un caracter: ";
    cin >> caracter;
    
    if (caracter >= 'A' && caracter <= 'Z') {
        cout << "\nEl caracter pertenece a las MAYUSCULAS." << endl;
    }

    else if (caracter >= 'a' && caracter <= 'z') {
        cout << "El caracter pertenece a las minusculas." << endl;
    }

    else {
        cout << "El caracter NO pertenece a el alfabeto.";
    }

    system("pause");
    return 0;

}

