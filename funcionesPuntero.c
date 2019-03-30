
/*
void verSiAnda (void)
{
    printf("funciona");
}

int cambiarValor (int dato)
{
    dato = 0;
    printf("\n lugar valor %d",&dato);
}

int cambiarReferencia (int *dato)
{
    *dato = 0;
    printf("\n lugar referencia %d",&*dato);

}
*/

/*
int pedirEdad (int *edad)
{
    int aux;
    int sePudo;
    int retorno;
    retorno = 0;
    printf("ingrese su edad ");
    if(scanf("%d",&aux) == 1)
    {
        if(aux>0 && aux<150)
        {
            *edad = aux;
            retorno = 1;
        }
        return retorno;
    }
    return retorno;

}
*/


int dividir(int datoUno, int datoDos, float *resultado)
{
    float aux;
    int retorno;
    retorno = 1;

    if(datoDos != 0)
    {
        aux = (float)datoUno / datoDos;
        *resultado = aux;
        return 1;
    }
    return retorno;

}






