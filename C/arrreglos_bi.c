#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int arreglo1[3][3], arreglo2[3][3], x;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese valor para arreglo %d, %d: ",i+1, j+1);
            scanf("%d", &arreglo1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arreglo1[i][j]);
        }
        printf("\n");
    }
    x=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i==x && j ==x)
            {
                printf("%d ", arreglo1[i][j]);
            }else{
                printf("  ");
            }
        }
        x+=1;
        printf("\n");
    }
    
    return 0;
}
