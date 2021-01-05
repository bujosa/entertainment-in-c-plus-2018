


#include <iostream>
#include "Cuenta.h"
#include <string>

using namespace std;

int main()
{
	Cuenta C;
	int opcion = 0;
	
	do {
		system("cls");
		cout << "\t\tTransacciones Cuenta Corriente\n\n";
		cout << "1. Depositar una cantidad \n";
		cout << "2. Retirar una cantidad, si hay balance disponible\n";
		cout << "3. Consultar el Balance y todas las últimas operaciones.\n";
		cout << "4. Salir\n\n";

		cin >> opcion;
		system("cls");

		switch (opcion)
		{
		case 1:
			C.Depositar();
			break;
		case 2:
			cout << "Ingrese monto que va a retirar: ";
			float monto;
			cin >> monto;
			C.Retirar(monto);
			break;
		case 3:
			C.Consultar();
			break;
		case 4:
			break;

		default:
			cout << "Digite la opcion correcta \n\n";
			break;
		}

		system("pause");
	} while (opcion != 4);

	cout << "Hasta Luego";
	system("pause");

}

