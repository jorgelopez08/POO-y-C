#include <stdio.h>
#include <stdlib.h>

/* int Util::randomInt(int min, int max){
    int num = (rand() % 1000000) + 1; 
    return num;
} */

int main(int argc, char const *argv[])
{
    int num[10], i =0,x=0, suma=0, multiplicacion, valor;
    //suma de numeros y multi
    do
    {
        num[i] = rand() % 10;
        printf("Numero %d: %d\n",i, num[i]);
        i++;
    } while (i<10);
    i=0;
    do
    {
        multiplicacion *= num[i];
        suma += num[i++];
    } while (i<10);
    printf("Suma: %d\nMultiplicacion: %d\n", suma, multiplicacion);
    suma =0;
    //suma de numeros descendiente
    printf("Ingresa un numero: ");
    scanf("%d",&valor);
    i=valor;
    while (i>0)
    {
        suma = suma + i--;
        printf("%d - ", suma);
    }
    printf("%d\n", suma);
    suma = 0;
    //suma de impares
    i=0;
    while (i<=100)
    {
        /* 1==1 1!=0 */
        if (i%2!=0)
        {
            printf("%d - ", i);
            suma += i;
            x++;
        }
        i++;
    }
    printf("suma = %d\nfueron %d numeros\n", suma, x);

    return 0;
}
/*  i++;
 i--
i = i - 1
i = i + 1 */