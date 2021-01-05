
#include "pch.h"
#include <iostream>
#include "Ventas.h"
#include <string>

using namespace std;


// Variables Globales 

Ventas V;

int decision = 0;


void Menu() 
{
	system("cls");
	cout << "\t Registro de ventas\n\n";
	cout << "1. Ingresar ventas\n";
	cout << "2. Imprimir ventas\n";
	cout << "3. Salir\n\n";
	cin >> decision;
	system("cls");
}


int main()
{
	
	while (decision != 3)
	{
		Menu();

		switch (decision)
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
			cout << "Error Elegir solo las opciones predeterminadas\n\n";
			break;
		}
		system("pause");
	}
	

	cout << "Gracias\n\n";

	system("pause");
}

