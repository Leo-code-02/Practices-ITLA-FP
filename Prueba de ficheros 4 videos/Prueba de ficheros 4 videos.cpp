
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
//Leandro Leguisamo Garcia 2024-2580

struct InfoFichero
{
	char Nombre[50];
	int Bytes;
	float KB;
	float MB;
	float GB;
};

int main()
{
	InfoFichero DatosFichero;

	strcpy(DatosFichero.Nombre, "numero.txt");
	ifstream Fichero{ DatosFichero.Nombre, ios::binary };

	Fichero.seekg(0, ios::end);
	DatosFichero.Bytes = Fichero.tellg();
	DatosFichero KB = (float)DatosFichero.Bytes / 1024;
	DatosFichero MB = (float)DatosFichero.Bytes / 1024;
	DatosFichero GB = (float)DatosFichero.Bytes / 1024;
	Fichero.close();

	cout << "--------------------------------------" << endl;
	cout << "Fichero       : " << DatosFichero.Nombre << endl;
	cout << "Bytes (By)    : " << DatosFichero.Nombre << endl;
	cout << "Kilobytes (KB): " << DatosFichero.KB << endl;
	cout << "Mehabytes (MB): " << DatosFichero.MB << endl;
	cout << "Gigabytes (GB): " << DatosFichero.GB << endl;
	cout << "--------------------------------------" << endl;

	system("pause");
	return 0;
}

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
//Leandro Leguisao Garcia 2024-2580

struct InfoFichero
{
	char Nombre[50];
	int Bytes;
	float KB;
	float MB;
	float GB;
};

struct Resgistro {
	char Nombre[30];
	char Email[40];
	char Telefono[15];
};

int main() //Video 1
{
	ofstream fichero("numeros.txt");
	for (int x = 1; x <= 1000; x++) fichero << x << endl;
	fichero.close();

	system("pause");



	//Video 2

	ifstream fichero("numeros.txt");

	while (fichero.good()) cout << (char)fichero.get();
	fichero.close();


	//Video 3

	InfoFichero DatosFichero;

	strcpy_s(DatosFichero.Nombre, "numero.txt");
	ifstream Fichero{ DatosFichero.Nombre, ios::binary };

	Fichero.seekg(0, ios::end);
	DatosFichero.Bytes = Fichero.tellg();
	DatosFichero.KB = (float)DatosFichero.Bytes / 1024;
	DatosFichero.MB = (float)DatosFichero.Bytes / 1024;
	DatosFichero.GB = (float)DatosFichero.Bytes / 1024;
	Fichero.close();

	cout << "--------------------------------------" << endl;
	cout << "Fichero       : " << DatosFichero.Nombre << endl;
	cout << "Bytes (By)    : " << DatosFichero.Nombre << endl;
	cout << "Kilobytes (KB): " << DatosFichero.KB << endl;
	cout << "Mehabytes (MB): " << DatosFichero.MB << endl;
	cout << "Gigabytes (GB): " << DatosFichero.GB << endl;
	cout << "--------------------------------------" << endl;

	system("pause");

	//Video 4

	Resgistro Agenda, LeerAgenda;

	ofstream fichero("miagenda.dat", ios::binary);

	strcpy_s(Agenda.Nombre, "Leandro");
	strcpy_s(Agenda.Email, "email@mail.com");
	strcpy_s(Agenda.Nombre, "8092345678");

	fichero.write((char*)&Agenda, sizeof(Resgistro));
	fichero.close();

	ifstream leerfichero("miagenda.dat", ios::binary);
	leerfichero.read((char*)&LeerAgenda, sizeof(Resgistro));

	cout << "Nombre: " << LeerAgenda.Nombre << endl;
	cout << "Email: " << LeerAgenda.Email << endl;
	cout << "Telefono: " << LeerAgenda.Telefono << endl;
}
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fichero;
	fichero.open("numeros.txt");

	while (!fichero.eof()) {
		cout << (char)fichero.get();
	}
	fichero.close();

	system("pause");

}
