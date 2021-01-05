
#include <iostream>
#include <string>

using namespace std;

class Cisterna
{
private:
	int Contenido = 0; // Atributos
	int Capacidad = 15000; // Atributos
	
public:

	Cisterna() {}
	
	void Mostrar() {
		cout << "El contenido de la cistena es: " << Contenido << endl;;
		system("pause");
	}

	void sacar(int sacar) {
		if (Contenido - sacar >= 1000)
		{
			cout << "Es permitido" << endl;
			Contenido -= sacar;
		}
		else 
			cout << "no es permitido" << endl;
		system("pause");
	}

	void agregar(int entrar) {

		if (Contenido + entrar <= Capacidad)
			Contenido = entrar;	
		else 
			cout << "No es permitido";
	}

	bool ReducirCisterna() {

		if (Contenido / 2 > 1000)
		{
			Contenido = Contenido / 2;
			cout << "Cisterna ahora posee: " << Contenido << endl;
		}
		else
		{
			cout << "Cisterna tiene el contenido minimo" << endl;
			system("pause");
			return false;
		}
		return true;
	}
};


