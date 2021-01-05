#pragma once
#include <iostream>
using namespace std;

class  Cuenta
{
	
public:

	void Depositar(float monto) {
		this->Balance += monto;

		ActualizarOperaciones(monto, "Deposito");
	}

	int Retirar(float monto) {
		float nuevo_balance = this->Balance - monto;

		if (nuevo_balance < 0) return -1;

		this->Balance = nuevo_balance;
		ActualizarOperaciones(monto, "Retiro");

		return 1;
	}

	

	void Consultar() {
		cout << "Balance: " << this->Balance<<"\n";
		cout << "Ultimas operaciones: \n";

		for (int i = 0; i < 10; i++)
		{
			string fecha = this->Transacciones[i].fecha;
			int cantidad = this->Transacciones[i].cantidad;
			string tipo = this->Transacciones[i].tipo;

			cout << "Fecha: " << fecha << " Cantidad: "<< cantidad<< " Tipo: "<< tipo<<"\n";
		}
	}


	//Constructor
	Cuenta(string Fecha) {
		this->Balance = 0;
		this->fecha = Fecha;
	}

	
private:	
	struct Transaccion
	{
		string fecha;
		float cantidad = 0;
		string tipo;
	};

	int indice = 0;
	Transaccion Transacciones[10];
	float Balance;
	string fecha;

	void ActualizarOperaciones(float monto, string tipo) {
		Transacciones[this->indice].fecha = this->fecha;
		Transacciones[this->indice].cantidad = monto;
		Transacciones[this->indice].tipo = tipo;

		if (indice == 9) indice = 0;

		else indice++;

	}
};


