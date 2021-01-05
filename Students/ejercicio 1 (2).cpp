#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    //a.1

    // TODO ESTO ES USANDO LA LIBRERIA STDIO.H
    
    char string[50] = "Mi clase de programacion";

    printf("%c%s%c\n", '|', string, '|');
    //a.2


    int a = 5, b = 10, c = 15, d = 20;

    printf("%010d\n", a);
    printf("%010d\n", b);
    printf("%010d\n", c);
    printf("%010d\n", d);

    //a.3
    // la operacion correcta es la 1) 15 * 2,5
    //  porque todas las demas son operaciones incorrectas entre decimales etc

    //b. PRIVADO


    //c.TIENE QUE SER DOUBLE 
    
    system("pause");

    return 0;
}