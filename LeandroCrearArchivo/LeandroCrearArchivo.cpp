//Dios te ama.
//Maestro Jose Abreo Sanchez
//Leandro Leguisamo Garcia 2024-2580

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    ofstream Pru("Ejemplo.txt");
    if (!Pru) {
        cout << "NO SE ENCONTRO EL ARCHIVO";
        exit(1);
    }
    else {
        Pru << "EL SEÑOR GUIE NUESTOS PASOS";
    }
    Pru.close();
    system("pause");
    return EXIT_SUCCESS;
}