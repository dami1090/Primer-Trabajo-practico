#include <stdio.h>
#include <stdlib.h>

int pedircaracter(char*);

int main()
{
    char inicial;
    char* inicialPuntero=NULL;//guardo espacio para el puntero y q smp tenga espacio
     inicialPuntero=&inicial;

        if(pedircaracter(inicialPuntero))
{
    printf("la inicial, caracter es: %c",inicial);
}
else
{
    printf("no hay espacio en memoria o el puntero no apunta a nada");

}


    return 0;
}

int pedircaracter(char* caracter)
{
    int retorno=0;
    if(caracter!=NULL)
    {


        printf("ingrese su inicial: \n");
            *caracter=getch();

        retorno=1;

    }
    return retorno;
}
