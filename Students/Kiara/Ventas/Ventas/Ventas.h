#pragma once

#include <string>
#include <iostream>
#include <string.h>

using namespace std;
	
class Ventas
{
private: 
	string nombre;
	string ventas[50][200];
	int contador = 0;
	int contador2 = 1;
public:
	Ventas(){}

	void IngresarVentas() {


		double cantidad;

		cout << "\nIngrese el nombre de la venta: ";
		cin >> nombre;
		cout << "Ingrese la cantidad de la venta: ";
		cin >> cantidad;

		string pase = to_string(cantidad);
		ventas[contador][contador] = nombre;
		ventas[contador][contador2] = pase;
		contador++;
		contador2++;
        
	}
	void Imprimir() {
		for (int i = 0; i < contador; i++) {
			cout << "Venta: " << ventas[i][i] << " Cantidad: " << ventas[i][i+1] << endl;
		}
	}
};

