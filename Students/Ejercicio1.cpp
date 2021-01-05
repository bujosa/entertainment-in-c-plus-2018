#include <stdio.h>

using namespace std;

int main()
{
	//Ejercicio #1.a 
	//a.1
	char string[50] = {'M','i',' ','c','l','a','s','e',' ','d','e',' ','P','r','o','g','r','a','m','a','c','i','o','n'};
	printf("%10s",string);

	//a.2
	printf("%03f",'0',5.01,10.05,15.10,20.15);

	//a.3
	double var = 12.5;
	printf("Descuento: %4.2f%%",var);
	
	
	/*Preguntas
	a) LA diferencia entre ++a y a++ es que cuando se coloco ++a dentro de una expresion,
	primero se incrementa el valor de la variable y luego se ejecuta la expresion. Pasa lo
	contrario con a++, donde se ejecuta primero la expresion y luego se incrementa el valor de la variable.
	
	b)
	
	
	*/
}
