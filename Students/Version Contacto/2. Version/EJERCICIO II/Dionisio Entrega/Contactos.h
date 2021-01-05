#pragma once

#include <iostream>
#include <string>

using namespace std;

class Contactos
{

private:

	string matriz[500][2]; // Arreglo Bidimensional 
	int Count = 0; 

public:
	
	Contactos() {}

	string NombreCompleto;
	string Telefono; 

	void AgregarContacto(string nombre, string telefono) 
	{

		matriz[Count][0] = nombre;

		matriz[Count][1] = telefono;

		Count++;

		cout << "Contacto Agregado Correctamente\n\n";
	}

	void BuscarContacto(string nombre)
	{
		
		bool dato = true;

		for (int i = 0; i < Count; i++)
		{
			if (matriz[i][0] == nombre) 
			{
				cout << "El numero es: " << matriz[i][1] << endl << endl;
				dato = false;
				break;
			}
		}
		if (dato)
		{
			cout << "El contacto no existe intente otra vez\n\n";
		}
	}

	void CambiarTelefono(string nombre) 
	{
		bool probar = true;

		string modificador;

		for (int i = 0; i < Count; i++)
		{
			if (matriz[i][0] == nombre) 
			{
				cout << "Ingrese el numero: ";
				getline(cin, modificador);
				matriz[i][1] = modificador;
				probar = false;
				break;
			}
		}

		if (probar)
		{
			cout << "El contacto no existe\n\n";
		}
		else
		{
			cout << "Cambio exitoso\n\n";
		}
	}
};

