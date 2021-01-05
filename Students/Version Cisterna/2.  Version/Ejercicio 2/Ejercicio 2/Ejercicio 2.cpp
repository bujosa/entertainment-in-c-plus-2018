#include "pch.h"
#include <iostream>
#include "Cisterna.h"
#include <string>

using namespace std;


// Variables globales
Cisterna C; // Sugerido por el mandasto
string letra = "";
bool transition = true;

void Funcion(string argumento);

int main()
{
	
	C.agregar(10000);

	cout << "Desea reducir el contenido de la cistena (S/N)?" << endl; //  Sugerido en el mandato

	getline(cin, letra);

	Funcion(letra);
}

void Funcion(string letra) 
{
	if (letra == "N")
	{
		C.MostrarContenido();
	}
	else if (letra == "S") {
		while (transition)
			transition = C.ReducirCisterna();
	}
	else
		cout << "Escribir solamente S o N" << endl;

	system("pause");
}


