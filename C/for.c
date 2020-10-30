#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int fibbonacci, aux;
    int n,m;
    int i;
    /* for ( i = 1; i <= 10; i=i+1)
    {
        printf("%d - ",i*i);
    }
    printf("\n");
    for ( i = 1; i <= 100; i++)
    {
       printf("%d\n",i);
    } */
    
    printf("ingrea n: ");
    scanf("%d",&n);
    for ( i = 0; i <= n; i++)
    {
        aux = (n-1) + (n-2);
        fibbonacci = aux;
        printf("%d + %d = %d\n",i-1, i-2, fibbonacci); 
    }
    return 0;
}
