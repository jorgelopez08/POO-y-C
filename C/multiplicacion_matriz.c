#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matriz1[3][3], matriz2[3][3], matriz3[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese valor matriz 1: %d, %d: ",i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese valor para matriz 2: %d, %d: ",i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 0; j++)
        {
            matriz3[i][j-1] = matriz1[i][j] * matriz2[i][j];
        }
        printf("\n");
    }
    
    return 0;
}
