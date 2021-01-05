#pragma once

#include <string>
#include <iostream>
#include <string.h>

using namespace std;
	
class Ventas
{
private: 
	
	string meses[12] = { "Diciembre","Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre"," Noviembre" };
	string NombreVenta; //
	string almacen[1000][1000]; // se almacena todos los datos
	double monto_total = 0;

	int x = 0; // delimitador

public:
	Ventas(){}

	void IngresarVentas() {


		double numero;

		cout << "\t\t Menu de Ingresion de datos de venta\n\n";

		cout << "Digite Nombre de la Venta: ";
		cin>> NombreVenta;
		cout << "Digite Monto venta: ";
		cin >> numero;
		monto_total += numero;
		string conversion = to_string(numero);

		almacen[x][x] = NombreVenta;
		almacen[x][x+1] = conversion;
		x++;
        
	}
	void Imprimir() 
	{

		for (int i = 0; i < x; i++) 
			std::cout << "Nombre Venta: " << almacen[i][i] << " Monto Venta: " << almacen[i][i+1] << " Mes: " <<  meses[i%12];

		cout << "Monto total generado: " << monto_total << endl;
	}
};

