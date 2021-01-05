// Test_Ventas1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Ventas.h"


using namespace std;

int main()
{
	int total = 0;

	while (true)
	{
		system("cls");

		cout << "Menu\n";
		cout << "1) Ingresar ventas\n";
		cout << "2) Imprimir ventas\n";
		cout << "3) Salir\n";

		char opcion = '1';
		cin >> opcion;

		if (opcion == '1') {
			int cantidad = 0;

			cout << "Cuantos vendedores desea ingresar?";
			cin >> cantidad;

			for (int i = 0; i < cantidad; i++)
			{
				string nombre;
				cout << "Ingrese el nombre del vendedor:\n";
				cin.ignore();
				getline(cin, nombre);

				Ventas V(nombre);
				total += V.IngresarVentas();
			}

		}
		else if (opcion == '2') cout<< "El total de ventas en el año es igual a: "<< total;

		else if (opcion == '3') break;

		else cout << "Opcion invalida";

		cout << "\n";
		system("pause");
	}
}

