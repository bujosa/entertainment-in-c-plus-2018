
#include <iostream>
#include "Ventas.h"
#include <string>

using namespace std;

int main()
{
	Ventas V;	
	int opcion = 0;
	do {
		system("cls");
		std::cout << "\t Registro de ventas\n\n";
		std::cout << "1. Ingresar ventas\n";
		std::cout << "2. Imprimir ventas\n";
		std::cout << "3. Salir\n\n";
		std::cin >> opcion;
		system("cls");
		switch (opcion)
		{
		case 1:
			V.IngresarVentas();
			break;
		case 2:
			V.Imprimir();
			break;
		case 3:
			break;	
		default:
			std::cout << "Digite una de las opciones establecidas\n\n";
			break;
		}
		system("pause");	
	} while (opcion != 3);

	std::cout << "Gracias por utilizarnos\n\n";

	system("pause");
}

