#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float compra, totalPagar,descontado;
    int descuento = 10;

    printf("Ingresa el precio: ");
    scanf("%f",&compra);

    if (compra >= 2000){
        descuento = 30;
    }

    descontado = ((compra *descuento)/100);
    totalPagar = compra - descontado ;
    printf("El descuento fue de %.2f\n", descontado);
    printf("El total a pagar es de %.2f\n",totalPagar);
    return 0;
}
