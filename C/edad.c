#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dia1, dia2, mes1, mes2, anio1, anio2, edia, emes, eanio;

    printf("Ingrese fecha actual:\n");
    printf("Dia: ");
    scanf("%d", &dia1);
    printf("Mes: ");
    scanf("%d", &mes1);
    printf("Anio: ");
    scanf("%d", &anio1);

    if ((dia1 > 0 && dia1 <= 31) && (mes1 > 0 && mes1 <= 12))
    {
        printf("Fecha valida!\n");
    }
    else
    {
        printf("No es una fecha valida!\n");
    }

    printf("Ingrese su fecha de naciemiento: \n");
    printf("Dia: ");
    scanf("%d", &dia2);
    printf("Mes: ");
    scanf("%d", &mes2);
    printf("Anio: ");
    scanf("%d", &anio2);

    if ((dia2>0 && dia2<=31)&&(mes2>0&&mes2<=12))
    {
        printf("Fecha valida!\n");
    }else{
        printf("No es una fecha valida!\n");
    }
    
    edia = dia1 - dia2;
    emes = mes1 - mes2;
    eanio = anio1 - anio2;
    
    if (anio1<anio2)
    {
        printf("No has nacido!\n");
    }else
    {
        printf("Tienes %d anios con %d meses y %d  dias\n", eanio, emes, edia);
    }
    
    
    return 0;
}
