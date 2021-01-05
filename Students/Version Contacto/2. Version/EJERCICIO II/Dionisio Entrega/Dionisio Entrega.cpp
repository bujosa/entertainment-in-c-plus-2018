
#include "pch.h"
#include "Contactos.h"
#include <iostream>
#include <string>

using namespace std;

Contactos C; // Global

void Menu() {

	system("cls");

	cout << "Menu de Contactos | UNIBE\n\n";

	cout << "\n1. Agregar un Contacto";

	cout << "\n2. Cambiar datos del Contacto";

	cout << "\n3. Visualizar datos del Contacto";

	cout << "\n4. Salir\n\n";
}

void Agregar() 
{
	cout << "\tNuevo contacto\n\n";
	cout << "Ingrese el nombre: ";
	cin >> C.NombreCompleto;
	cout << "Ingrese el numero: ";
	cin >> C.Telefono;
	C.AgregarContacto(C.NombreCompleto, C.Telefono);
	
}

void Cambiar() {
	cout << "\t Cambio de datos \n\n";
	cout << "Ingrese el nombre para buscar el contacto: ";
	cin >> C.NombreCompleto;
	C.CambiarTelefono(C.NombreCompleto);
}

void Busquedad() {
	cout << "\t Busquedad de Contacto\n\n";
	cout << "\t Ingrese nombre de usuario para buscarlo: ";
	cin >> C.NombreCompleto;;
	C.BuscarContacto(C.NombreCompleto);
}

int main()
{
	
	char opcion;

	do
	{
		Menu();
		cin >> opcion;
		system("cls");

		switch (opcion)
		{
		case '1':
			Agregar();
			break;

		case '2':
			Cambiar();
			break;

		case '3':
			Busquedad();
			break;

		case '4':
			break;

		default:
			cout << "Opcion invalidad" << endl << endl;
			break;
		}

		if(opcion!='4')
		 system("pause");

	} while (opcion != '4');

	system("cls");

	cout << "Hasta Luego\n\n";

	system("pause");

}



