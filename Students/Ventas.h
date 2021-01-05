#pragma once
#include <iostream>
using namespace std;

class  Ventas
{


public:

	int IngresarVentas() {
		int Ventas[12];
		string Mes[] = { "Enero", "Febrero", "Marzo", "Abril","Mayo", "Junio", "Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre" };
		int total = 0;

		for (int i = 0; i < 12; i++)
		{
			int valor = 0;
			cout << "Ingrese el valor de las ventas del mes de " << Mes[i] << ": ";
			cin >> valor;
			Ventas[i] = valor;
			total += valor;
		}
		return total;
	}

	void ImprimirVentas() {
		int total = 0;

		for (int i = 0; i < 12; i++)
		{
			total += this->ventas[i];
		}
	
		cout << total;
	}


	//Constructor
	Ventas(string Nombre) {
		this->nombre = Nombre;		
	}


private:
	int ventas[12];
	string nombre;
};

