#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i=1, opcion;
    int cantidad;
    
    printf("selecciona el ciclo que deseas: \n 1.-While \n2.- For \n3.- Do While");

    printf("\n introduce un numero\n ");
    scanf("%d",&num);
    printf("introduce una un numero o cantidad: ");
    scanf("%d",&cantidad);

    switch(num)
    {
    case 1:
        while(i<cantidad)
        {
            if (i%2!=0)
            {
                printf("%d\n",i);
                i=i+2;
            }
        }
        break;
    case 2:
        for (i=1; i<cantidad; i++)
        {
            if(i%2==0)
            {
                printf("%d\n",i+1);
            }
        }
        break;
    default:
        printf("opcion no valida\n");
        break;
    }
    return 0;
}
