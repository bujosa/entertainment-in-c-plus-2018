#include "pch.h"
#include <iostream>
#include "Cisterna.h"
#include <string>
#include <conio.h>

using namespace std;




int main()
{

	string opcion = "";
	Cisterna c;
	bool decision = true;
	c.agregar(10000); // Pide que agregue 10,000 por defaul no que introduzca 
	system("cls");

	cout << "Desea reducir el contenido de la cistena (S/N)?" << endl;

	getline(cin, opcion);

	if (opcion == "N") 
		c.Mostrar();
	else if( opcion == "S"){
		while (decision) 
			decision = c.ReducirCisterna();
	}
    else {
	cout << "Solo es permitido S o N\n";
	system("pause");
     }
}



