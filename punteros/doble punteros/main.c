#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var=5;
    int*p;
    p=&var;
    p++;//muevo el puntero pasa al siguente posicion

    printf("%p \n",var);
    printf("%p \n",p);
    printf("%p \n",p+0);// queda igual la memoria

    printf("%p \n",p+1);// se suman 4 bytes en memoria
    printf("%p \n",p+2);//se suman 8
    printf("%p \n",p-1);// se restan 4
    return 0;// recorreria el vecto xq el vecto guarda en secuencia
    /*ejemplo vector[0]=8;
            vector[1]=21;
            vector[2]=16;
            los p+ me van a tirar los resultados de las posiciones del vector*/
}
