#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 3

int getPrecio(char *mensaje, float *elPrecio);
int getCodigo(char *mensaje, char *codigo);


int main()
{
    float precios[TAMANIO];
    char codigo[TAMANIO][7]; //Array de 3 elementos con el largo de 7
    int i;
    int j;
    /*
    int respuesta;
    char ingreso[7];

    printf("Ingrese Cadena: ");
    scanf("%s", ingreso);

    respuesta = strlen(ingreso);
    printf("Cantidad de caracteres ingreso: %d", respuesta);
    respuesta = strlen("lalala");
    printf("\nCantidad de caracteres ingreso: %d", respuesta);
    */

    for(i = 0; i<TAMANIO; i++)
    {
        while(getPrecio("\nIngrese precio: ",&precios[i]) == 0)
        {
            printf("Error... ");
        }
        while(getCodigo("Ingrese Codigo: ",codigo[i]) == 0)
        {
            printf("Error... ");
        }

    }
     for(i = 0; ; )
    {
        for(j = 0; ; )
        {
            if (precios[i]<precios[j])
            {
                int aux = precios[i];
                precios[i]=precios[j];
                precios[j]= aux;

                char auxCo[7];
                strcpy(auxCo,codigo[i]);
                strcpy(codigo[i], codigo[j]);
                strcpy(codigo[j], auxCo);
            }
        }
    }

    for(i = 0; i<TAMANIO; i++)
    {
        printf("Precio %f\n", precios[i]);
    }


    printf("\n\nDe arrays a estructuras\n");
    return 0;
}

int getCodigo(char *mensaje, char *codigo)
{
    char ingreso[50];
    int retorno = 0;

    printf(mensaje);
    scanf("%s",ingreso);


    if(strlen(ingreso)==7)
    {

        retorno = 1;
    }
    return retorno;
}

int getPrecio(char *mensaje, float *elPrecio)
{
    char ingreso[50];
    float auxPrecio;
    int retorno = 0;

    printf(mensaje);
    scanf("%s",ingreso);
    auxPrecio=atof(ingreso); //atof ---> recibe una constante y devuelve el valor

    if(auxPrecio > 0)
    {
        *elPrecio = auxPrecio;
        retorno = 1;
    }
    return retorno;
}


