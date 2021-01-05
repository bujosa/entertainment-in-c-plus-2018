#pragma once

#include <string>
#include <string.h>
#include <iostream>

using namespace std;

class Cuenta
{

private:
	float balance = 0;
	int contador = 0;
	string transaciones[1000];

public:
	Cuenta(){}

	void Depositar() {
		string dato;
		float transferencia;
		cout << "Ingrese la fecha (dia-mes-año): ";
		cin >> dato;
		cout << "Ingrese Cantidad: ";
		cin >> transferencia;
		balance += transferencia;
		string tranfer = to_string(transferencia);
		transaciones[contador] = dato + " " + tranfer;
		contador++;
	}

	void Retirar(float dato) {
		if (balance - dato <= 0) {
			cout << "No se puede retirar mas fondos";
		}
		else
			balance -= dato;
	}

	void Consultar() {
		cout << "El Balance Actual es: " << balance;
		int contador2 = 0;
		cout << "\n\nUltimas transaciones:\n\n";
		if (contador < 10) {
			for (int i = 0; i < contador; i++) {
				cout << "Transacion: " << transaciones[i] << endl;
			}
		}
		else {
			for (int i = contador - 1; i > 0; i--) {
				if (contador2 < 10) {
					cout << "Transacion: " << transaciones[i] << endl;
				}
				contador2++;
			}
		}
	}
};

