#include <stdio.h>
#include <stdlib.h>

void imprimirPantalla();
int edad();
void imprimirIngreso(float ingreso);

int edad1;

float ingreso(float ingresos);
int main(int argc, char const *argv[])
{
    float ingresos;
    ingresos = ingreso(10000.50);
    printf("El ingreso fue de %.2f\n", ingresos);

    imprimirIngreso(ingresos);

    printf("\nIngresa una edad\n");
    scanf("%d", &edad1);
    printf("la edad sera %d\n",edad());

    return 0;
}

void imprimirPantalla(){
    printf("Hola, bienvenido al programa\n");
    printf("%d %d", 5, 10);
}

float ingreso(float ingresos){
    float ingreso1;
    ingreso1 = ingresos * .9;
    return ingreso1;
}

int edad(){
    return edad1 * 10;
}

void imprimirIngreso(float ingreso){
    printf("%.2f", ingreso);
}