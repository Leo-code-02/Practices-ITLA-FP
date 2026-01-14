#include <iostream>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580
int main()
{
    // Se calcula el factorial de 7: 7! = 7 * 6 * 5 * 4 * 3 * 2 * 1

    int factorial = 1;

    for (int i = 1; i <= 7 ; i++) {
        factorial *= i;
    }

    cout << "El factorial del 7 es: " << factorial << endl;

    system("pause");
    return 0;

}


