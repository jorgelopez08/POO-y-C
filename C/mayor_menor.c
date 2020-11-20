#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a=0, b=0, c=0, mayor;
    char x, opc;
    char valor, numeros[10];
    numeros[0] = 'cero';
    numeros[5] = 'cinco';
    numeros[9] = 'nueve';
    printf("Ingresa valores de a: ");
    scanf("%d", &a);
    printf("Ingresa valores de b: ");
    scanf("%d", &b);
    printf("Ingresa valores de c: ");
    scanf("%d", &c);
    
    if (mayor == 0){
       valor = 'cero';
    }else if(mayor == 5){
         
    }
    
    

    if (a>b)
    {
        if (a>c)
        {
            x = 'a';
        }else{
            x = 'c';
        }
    }else{
        if (b>c)
        {
            x = 'b';
        }else{
            x = 'c';
        }
    }

    if (a>b)
    {
        if (a>c)
        {
            printf("El mayor es %d, cinco", a);
            mayor = a;
        }else{
            printf("El mayor es %d", c);
            mayor = c;
        }
    }else{
        if (b>c)
        {
            printf("El mayor es %d", b);
            mayor = b;
        }else{
            printf("El mayor es %d", c);
            mayor = c;
        }
    }
    
    printf("\n");
    switch (x)
    {
    case 'a':
        printf("El mayor es %d",a);
        break;
    case 'b':
        printf("El mayor es %d",b);
        break;
    case 'c':
        printf("El mayor es %d",c);
        break;
    }
    printf("\n");

    printf("El valor mayor es %d, %s", mayor, numeros[mayor]);
    

    return 0;
}
