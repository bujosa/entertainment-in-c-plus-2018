#pragma once
#include <iostream>

using namespace std;
class Cisterna
{
private:
	int Contenido;
	int Capacidad;
public:
	Cisterna() {
		Contenido = 0;
		Capacidad = 15000;
	};

	void ShowSize() {
		cout << Contenido << endl;
	}

	void AddContent(int c) {
		if (Contenido != 15000) {
			if (Contenido + c > 15000) {
				cout << "El limite es mayor a " << Capacidad << endl;
			}
			else {
				Contenido = Contenido + c;
			}
		}
		else {
			cout << "Ya esta a tope" << endl;
		}
	}

	void Quitar(int c) {
		if (Contenido != 1000) {
			if (Contenido - c < 1000) {
				cout << "Este valor hace que baje del minimo que es" << 1000 << endl;
			}
			else {
				Contenido = Contenido - c;
			}
		}
		else {
			cout << "La cisterna esta en el minimo" << endl;
		}
	}

	int ReducirCisterna() {
		if (Contenido != 1000) {
			if (Contenido / 2 < 1000) {
				cout << "Cisterna tiene el contenido minimo" << endl;
				return -1;
			}
			else {
				Quitar(Contenido / 2);
				return 1;
			}
			
		}
		else {
			cout << "Cisterna tiene el contenido minimo" << endl;
			return -1;
		}
	}
};

