#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

int main()
{
    int dia;

    cout << "Ingrese dia de la semana: ";
        cin >> dia;

        switch (dia) {
        case 1:
             cout<<"\nEl dia es lunes" << endl;
             break;
        case 2:
            cout << "\nEl dia es Martes" << endl;
            break;
        case 3:
            cout << "\nEl dia es Miercoles" << endl;
            break;
        case 4:
            cout << "\nEl dia es Jueves" << endl;
            break;
        case 5:
            cout << "\nEl dia es Viernes" << endl;
            break;
        case 6:
            cout << "\nEl dia es Sabado" << endl;
            break;
        case 7:
            cout << "\nEl dia es Domingo" << endl;
            break;
        default:
            cout << "\nNo es un dia de la semana." << endl;
        }

        system("pause");
        return 0;
}

