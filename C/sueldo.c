#include <stdlib.h>
#include <stdio.h>

#define A10 10
#define A7 7
#define A5 5
#define A3 3

int main(int argc, char const *argv[])
{
    int tiempo, aux;
    float sueldo, aumento;

    printf("Ingrese cuanto tiempo lleva en la compania: ");
    scanf("%d",&tiempo);
    printf("Ingrese el salario actual: ");
    scanf("%f",&sueldo);

    if (tiempo>10)
    {
        aumento = (sueldo * A10)/100;
        aux = A10;
    }
    else if (tiempo>=7&&tiempo<10)
    {
        aumento = (sueldo * A7)/100;
        aux = A7;
    }else if (tiempo<=5&&tiempo>3)
    {
        aumento = (sueldo * A5)/100;
        aux = A5;
    }else{
        aumento = (sueldo * A3)/100;
        aux = A3;
    }
    printf("Sueldo actual: %.2f\n", sueldo);
    printf("Aumento del %d%% seria %.2f\n",aux, aumento );  
    return 0;
}
