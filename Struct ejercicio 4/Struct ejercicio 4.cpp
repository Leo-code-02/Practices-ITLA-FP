#include <iostream>   
using namespace std;
//Leandro leguisamo Garcia 2024-2580

struct ConversionTiempo {
    int anios;         
    long long minutos;

    
    void convertir() {
        minutos = anios * 365 * 24 * 60; // 1 año = 365 días * 24 horas * 60 minutos
    }
};

int main() {
   
    ConversionTiempo tiempo;

    // Solicitamos al usuario que ingrese la cantidad de años
    cout << "Ingrese la cantidad de anios: ";
    cin >> tiempo.anios;

    // Llamamos al método para realizar la conversión
    tiempo.convertir();

    // Mostramos el resultado en pantalla
    cout <<tiempo.anios << " anios equivalen a " << tiempo.minutos << " minutos." << endl;

    system("pause");
    return 0;
}

