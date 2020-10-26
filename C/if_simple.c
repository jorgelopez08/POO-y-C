#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[2], aux;
    /* int x,y, aux; */

    for (int i = 0; i <= 2; i=i+1)
    {
        printf("Ingrese el valor %d: ",i+1);
        scanf("%d",&a[i]);
    }

    if (a[0]<a[1]){
        aux=a[0];
        a[0]=a[1];
        a[1]=aux;
    }

    printf("El mayor es %i, el menor es %i\n",a[0],a[1]);
    return 0;
}
