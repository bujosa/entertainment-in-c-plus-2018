

#include <stdio.h>
#include <iostream>



void main() 
{
/*a)*/
// string es una palabra reservada
char string [50];
printf("'                         Mi clase de Programacion'\n\n");

/*a2)*/
printf("%010.4f\n\n",5.0100); // Proviene de la libreria <stdio.h>
printf("%010.4f\n\n",10.0500 ); // Proviene de la libreria <stdio.h>
printf("%010.4f\n\n", 15.1000); // Proviene de la libreria <stdio.h>
printf("%010.4f\n\n", 20.1500); // Proviene de la libreria <stdio.h>

// Profe ya por preguntar no seria mejor usar la libreria 
// Porque no se uso la libreria <iomanip> ?? es mejor para operar esto
/*a3)*/
float a;
a= 12.5; 
printf("Descuento: %0.2f%%\n\n",a); // Proviene de la libreria <stdio.h>

system("pause");
}

// TEORICO 


// a)  Explique con palabras cual es la diferencia entre ++a y a++?

// Respuesta: Que ++a suma primero el numero a la letra
// y a++ primero muestra el numero y luego lo suma realiza la operacion ++ despues que se muestra el valor de a

// b) Dadas las variables a y b, porque es errónea la operación (a+b) % 6, si a es de tipo coma flotante y b es int?
//
// Respuesta: Es debido a datos flotante y entero no se pueden sumar al menos que fueran del mismo tipo.
// de variable.


// Mandatos

	// a.1
	//a.1) Mostrar el texto “Mi clase de Programación” guardado en un char string[50] hacia la 
	//     derecha con una simple comilla al principio y al final del espacio. 

	// 
	/*a.2) Se muestre siguiente salida con los números 5.01, 10.05, 15.10 y 20.15 
	      00005.0100      00010.0500      00015.1000      00020.1500
	*/

	// a.3)  Se muestre la siguiente salida de la variable a que contiene el numero 12.5

    // Descuento: 12.50%



