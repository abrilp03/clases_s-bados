#include <stdio.h>
#include <stdlib.h>
#include "funcionesPuntero.h"

int main()
{
    int sepudo;
    float respuesta;
    int primeraEdad;
    int segundaEdad;
    pedirEdad(&primeraEdad);
    pedirEdad(&segundaEdad);

    sepudo = dividir(primeraEdad, segundaEdad,&respuesta);
    if(sepudo == 1)
    {
        printf("la respuesta es %f", respuesta);
    }
    else
    {
        printf("no se puede");
    }

    /* //DIVISION
    int sepudo;
    float respuesta;

    sepudo = dividir(15,2,&respuesta);
    if(sepudo == 1)
    {
        printf("la respuesta es %f", respuesta);
    }
    else
    {
        printf("no se puede");
    }



    */




    /*
    int miEdad;

    while (pedirEdad(&miEdad) == 0)
    {
        //nada
    }
    printf("Su edad es: %d", miEdad);

*/

    /*
    retorno = pedirEdad(&miEdad);

    if (retorno == 1)
    {
        printf("Su edad es %d", miEdad);
    }
    else
    {
        printf("Su edad no se pudo");
    }

*/


    /*
    printf("Hello world!\n");
    verSiAnda();

    int sueldo;
    printf("\n lugar sueldo %d", sueldo);
    sueldo = 10000;

    cambiarValor(sueldo);
    printf(" por valor :%d",sueldo);
    cambiarReferencia(&sueldo);
    printf("por referencia :%d",sueldo);
    */


    return 0;
}
