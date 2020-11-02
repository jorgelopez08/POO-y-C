#include <stdio.h>
int main()
{
    int num, random, contador=0;

    printf("\n Adivinar numero");

    for (int i = 0; i < 10; i++)
    {
        random = rand() % 10;

        printf("\n Introduce numero: ");
        scanf("%d", &num);

        if (num == random){
            printf("\n Has acertado! \n");
            contador++;
        }
    }
    printf("Usted gano %d veces \n", contador);
    return 0;
}