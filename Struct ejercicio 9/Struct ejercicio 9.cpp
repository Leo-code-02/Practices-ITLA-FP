#include <iostream>   
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

struct ConversionTiempo {
    int anios;         
    long long minutos; 

    // Método que realiza la conversión de años a minutos
    void convertir() {
        minutos = anios * 365 * 24 * 60; // 1 año = 365 días * 24 horas * 60 minutos
    }
};

int main() {
   
    ConversionTiempo tiempo;

    
    cout << "Ingrese la cantidad de anios: ";
    cin >> tiempo.anios;

    // Llamamos al método para realizar la conversión
    tiempo.convertir();

    // Mostramos el resultado en pantalla
    cout <<"\n"<< tiempo.anios << " anios equivalen a " << tiempo.minutos << " minutos." << endl;

    system("pause");
    return 0;
}
