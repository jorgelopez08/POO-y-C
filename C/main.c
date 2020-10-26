#include <stdio.h>
#include <stdlib.h>

int main()
{
    int respuesta=1, opcion;
    float ingresos=0, egresos=0, utilidad=0, totali=0, totale=0;

    printf(" Laboratorios \n");
    printf("\n ingrese 1 para registrar el ingreso o ingrese 2 para registrar el egreso: ");
    scanf("%d",&opcion);

    switch(opcion)
    {
    case 1:
        printf("\n registra el ingreso: ");
        scanf("%f",&ingresos);
        totali+=ingresos;
        break;
    case 2:
        printf("\n registra el egreso: ");
        scanf("%f",&egresos);
        totale+=egresos;
        break;
    default:
        printf("\n Digito no reconocido: ");


    }

    return 0;
}
