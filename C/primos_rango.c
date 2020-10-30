#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int  n, m, primo;
    printf("Desde que numero quiere mostrar? ");
    scanf("%d", &n);//desde que numero 
    printf("Hasta que numeor quiere mostrar? ");
    scanf("%d", &m);//hasta que numero
    /*linea 7 a 10 se ingresa el rango de numeros de los cuales se sacaran
    los numeros primos*/

    for (int i = n; i <= m;i++ )
    {  
        //en el for i sera igual al valor inicial y m el rango maximo de numeros
        if ((i>1 && i%2!=0 &&  i%3!=0 && i%5!=0) || i==5)
        {
            /* en el if, un numero primo es mayor que 1, y no tiene residuos en cero dividiendo
            entre 2, 3 y 5, pero el 5 si es primo*/
            printf("%d\n",i);
        }
    }
    return 0;
}
