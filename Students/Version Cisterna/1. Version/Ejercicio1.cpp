
#include <iostream>
#include <string>


using namespace std;

int main()
{
	double arr[] = { 1.5000,1.5500,1.6000,1.6500,1.7000 };
	
	cout << "\"Mi Nombre es    \"" << endl; // a.1

	cout << "|Producto  |Precio    |Cantidad  |Valor     " <<endl; // a.2

	
	for (int i = 0; i < 5; i++)  // a.3
		cout << "\"" << arr[i] << "\",";

}

// a)  diferencia entre ++a y a++

// Respuesta: Que ++a suma primero el numero a la letra
// y a++ primero muestra el numero y luego lo suma realiza la operacion ++ despues que se muestra el valor de a

// b) dadas las variables a y b, porque es erronea la operacion  (a+b)%6 a es tipo flotante y b tipo int
//
// Respuesta: Es debido a datos flotante y entero no se pueden sumar al menos que fueran del mismo tipo.
// de variable.

