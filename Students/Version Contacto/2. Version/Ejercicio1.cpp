

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Iomanip permite posible utilizar left and right, y setw para los espacios

	float arr[] = { 1.5000,1.5500,1.6000,1.6500,1.7000};

	cout << '|' << left << setfill(' ') << setw(20) << "Programac++" << '|' << endl; // a1

	cout << '|' << right << setfill(' ') << setw(20) << "Programac++" << '|' << endl; //a2

	
	for (int i = 0; i < 5; i++) 
	{
		cout.precision(8); // para poner los decimales requeridos
	    cout << left << setfill('0') << setw(6) << arr[i] << " ";}

}

// B)  Cual es el acceso predeterminado para los miembros de una clase 

// Respuesta: Privado.

// C) Dadas las variables a,b y c Si a es float y b es double, cual es el tipo de dato
// de c en la operacion c = a + b;

// Respuesta: Double (decimal);