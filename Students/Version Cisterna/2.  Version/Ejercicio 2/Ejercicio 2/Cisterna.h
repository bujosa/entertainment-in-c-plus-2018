
#include <iostream>
#include <string>

using namespace std;

class Cisterna
{
private:
	
	int Contenido = 0; // valor por defecto para que no ocurra un stackoverflow
	int Capacidad = 15000; // Max_capacity
	
public:

	Cisterna(){} // Constructor por defecto
	
	void MostrarContenido() 
	{
		cout << "Contenido actual es: " << Contenido << endl;

	}

	void sacar(int dato)
	{
		if (Contenido - dato >= 1000)
		{
			cout << "Valido" << endl;

			Contenido -= dato;
		}
		else
		{
			cout << "Operacion Invalida has llegado al minimo contenido que se puede extraer" << endl;
		}

		system("pause");
	}

	void agregar(int dato) 
	{

		if (Contenido + dato <= Capacidad)
		{
			Contenido += dato;
		}
		else
		{
			cout << "No es permitido";
		}
	}

	bool ReducirCisterna() {

		if (Contenido / 2 > 1000)
		{
			Contenido = Contenido / 2;

			cout << "Cisterna ahora posee: " << Contenido << endl;
		}
		else
		{
			cout << "Cisterna tiene el contenido minimo\n" << endl;

			return false;
		}

		return true; // Por defecto para que el while corra mientras sea true
	}
};


