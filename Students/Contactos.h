#pragma once
#include <iostream>
using namespace std;

class  Contactos
{
public:
	
	//Constructor
	Contactos(string nombre, string tel) {
		this->nombre_completo = nombre;
		this->telefono = tel;
	 }

	//Funciones get
	string get_Nombre() {
		return this->nombre_completo;
	}
	string get_Telefono() {
		return this->telefono;
	}

	//Funciones set
	void set_Nombre(string nombre) {
		this->nombre_completo = nombre;
	}

	void set_Telefono(string tel) {
		this->telefono = tel;
	}

	


private:
	string nombre_completo;
	string telefono;
};


