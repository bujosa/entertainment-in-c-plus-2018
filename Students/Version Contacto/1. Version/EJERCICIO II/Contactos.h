#pragma once

#include <iostream>
#include <string>

using namespace std;

class Contactos
{

private:

	string matriz[1000][2]; // Arreglo Bidimensional 
	int contador = 0; // Contador de contactos actuales

public:
	
	Contactos() {}// contructor por default sin tocar.

	string NombreCompleto; // Atributos
	string Telefono; // Atributos

	// Funcion de agrefar contactos
	void AgregarContacto(string nombre, string telefono) 
	{

		matriz[contador][0] = nombre;

		matriz[contador][1] = telefono;

		contador++;

		cout << "Contacto Agregado \n\n";
	}

	// Funcion de buscar contacto
	void Buscar(string nombre)
	{
		
		bool posible = true;

		for (int i = 0; i < contador; i++)
		{
			if (matriz[i][0] == nombre) 
			{
				cout << "El numero es: " << matriz[i][1] << endl << endl;
				posible = false;
				break;
			}
		}
		if (posible)
			cout << "El contacto no existe\n\n";
	}

	// Funcin de cambio de datos
	void CambiarTelefono(string nombre) 
	{
		bool validar = true;
		string modificador;
		for (int i = 0; i < contador; i++) 
		{
			if (matriz[i][0] == nombre) 
			{
				cout << "Ingrese el numero: ";
				getline(cin, modificador);
				matriz[i][1] = modificador;
				validar = false;
				break;
			}
		}

		if (validar)
			cout << "El contacto no existe\n\n";
		else
			cout << "Cambio exitoso\n\n";

	}

};

