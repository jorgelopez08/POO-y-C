#include <stdio.h>
#include <stdlib.h>

#define MAX 20
int arr[20];
void imprimir();
void setRand();

int main()
{
    setRand();
    imprimir();
    return 0;
}

void imprimir(){
    printf("Multiplos de 3: \n");
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i]%3==0)
        {
            printf("%d. %d \n",i+1 ,arr[i]);
        }
    }
    printf("Multiplos de 5: \n");
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i]%5==0)
        {
            printf("%d. %d \n",i+1 ,arr[i]);
        }
    }
    printf("Vector completo: \n");
    for (int i = 0; i < MAX; i++)
    {
        printf("%d. %d \n",i+1 ,arr[i]);
    }
}

void setRand(){
    for (int i = 0; i < MAX; i++)
    {
        arr[i] = rand()%50 +1;
    }
}

