
#include "pch.h"
#include <iostream>
#include "Contactos.h"
#include <string>

using namespace std;



int main()
{
	Contactos C; 
	char opcion;

	do
	{
		system("cls");

		cout << "Menu de Contactos | UNIBE\n\n";

		cout << "\n1. Agregar un Contacto";

		cout << "\n2. Cambiar datos del Contacto";

		cout << "\n3. Visualizar datos del Contacto";

		cout << "\n4. Salir\n\n";

		cin >> opcion;

		system("cls");

		switch (opcion)
		{
		case '1':
			
			cout << "\tNuevo contacto\n\n";
			cout << "Ingrese el nombre: ";
			cin >> C.NombreCompleto;
			cout << "Ingrese el numero: ";
			cin >> C.Telefono;
			C.AgregarContacto(C.NombreCompleto, C.Telefono);
			break;

		case '2':
			cout << "\t Cambio de datos \n\n";
			cout << "Ingrese el nombre para buscar el contacto: ";
			cin >> C.NombreCompleto;
			C.CambiarTelefono(C.NombreCompleto);
			break;

		case '3':
			cout << "\t Busquedad de Contacto\n\n";
			cout << "\t Ingrese nombre de usuario para buscarlo: ";
			cin >> C.NombreCompleto;;
			C.Buscar(C.NombreCompleto);
			break;

		case '4':
			break;

		default:

			cout << "Escribir las opciones validas\n\n";
			
			break;
		}

		if(opcion!='4')
		 system("pause");

	} while (opcion != '4');

	system("cls");

	cout << "Programa Finalizado\n\n";

	system("pause");

}



