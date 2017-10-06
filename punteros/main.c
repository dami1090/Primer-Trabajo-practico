#include <stdio.h>
#include <stdlib.h>

void intercambiar (int*,int*);
int main()
{
    int* pInt;
    int var=7;
     pInt=&var;// el ampersan &, es el operardor de direccion
    printf("pInt=%d, y var=%d\n",*pInt,&var);//con asterisco operador de inacceso, acedo al valor al q apunta el puntero!
    printf("%d\n",&var); //direccion de memoria d ela variable
    printf("%p\n",&var);//mismo valor de memoria pero en hexadecimal
    printf("%p\n",pInt);//la direccion de este puntero
    printf("%p\n",&pInt);//hexadecimal x eso aparece la C y en tro no xq C=12
    printf("%d\n",*pInt);//valor q tinee adentroel puntero

   /* int y=8,z=36;
    intercambiar(&y,&z);
   printf("y=%d ademas z=%d",y,z);*/
    return 0;
}
void intercambiar(int* a, int* b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
