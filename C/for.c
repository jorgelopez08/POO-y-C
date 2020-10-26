#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    for ( i = 1; i <= 10; i=i+1)
    {
        printf("%d - ",i*i);
    }
    printf("\n");
    for ( i = 1; i <= 100; i++)
    {
       printf("%d\n",i);
    }
    
    return 0;
}
