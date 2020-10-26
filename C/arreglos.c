#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int estatura[10], i;
    float promedio;
    for ( i = 0; i < 10; i++)
    {
        printf("Ingresa la estatura en centimetros %d: ",i+1);
        scanf("%d",&estatura[i]);
        if (estatura[i]==0)
        {
            break;
        }
    }

    for (int j = 0; j < i; j++)
    {
        promedio += estatura[j];
    }
    
    promedio = promedio / i;
    
    printf("El promedio de %d es: %.2f",i+1,promedio);

    /* for (int k = 0; k < 5; k++)
    {
        printf("%d\n",k);
    }
    
    printf("%d",k); */
    return 0;
}