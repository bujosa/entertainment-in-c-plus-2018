#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //a.1
    char string[50] = "Mi clase de programacion";
    printf("%c%s%c\n", '|', string, '|');
    //a.2
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;

    printf("%8d\n", a);
    printf("%8d\n", b);
    printf("%8d\n", c);
    printf("%8d\n", d);
    //a.3
    // la operacion correcta es la 1 15 * 2,5

    //b.
    /*el acceso predeterminado para los 
    miembros de una clase en c++ es privado
    */

    //c.
    /*
    el tipo de datos resultante de la suma de un float y
    un double es un double
    */
    system("pause");

    return 0;
}