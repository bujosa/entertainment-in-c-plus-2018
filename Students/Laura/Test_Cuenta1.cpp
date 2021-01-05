// Test_Cuenta1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cuentas.h"

int main()
{

	cout << "Ingrese la fechas de hoy: ";
	string fecha;
	cin >>fecha;

	Cuenta cuenta(fecha);

	while (true)
	{
		system("cls");

		cout << "Transacciones Cuenta Corriente\n1) Depositar una cantidad\n2) Retirar una cantidad, si hay balance disponible\n3) Consultar el balance y todas las ultimas operaciones\n4) Salir\n";

		char menu = 'nulo';
		cin >> menu;

		if (menu == '1') {
			int cantidad = 0;

			cout << "Ingrese la cantidad a depositar: ";
			cin >> cantidad;
			cuenta.Depositar(cantidad);

		}
		else if (menu == '2') {
			int cantidad = 0;

			cout << "Ingrese la cantidad a retirar: ";
			cin >> cantidad;
			if(cuenta.Retirar(cantidad) == -1) cout<<"Balance insuficiente";		
		}

		else if (menu == '3') cuenta.Consultar();

		else if (menu == '4') break;

		else cout << "Por favor, ingrese una opcion valida";

		cout << "\n";
		system("pause");
	}
}
