#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int opc, repetir=1;
    float a, b, resultado;
    do
    {
        printf("Seleccione una opcion\n1. suma\n2. resta\n3.multiplicacion\n4. salir\n");
        scanf("%d",&opc);
        switch (opc)
        {
        case 1 ... 100:
            printf("Ingrese a y b: \n");
            scanf("%f",&a);
            scanf("%f",&b);
            resultado = a + b;
            printf("el resultado es %f\n", resultado);
            break;
        case 101:
            printf("Ingrese a y b: \n");
            scanf("%f",&a);
            scanf("%f",&b);
            resultado = a - b;
            printf("el resultado es %f\n", resultado);
            break;
            case 104:
                repetir = 0;
                break;
        default:
            printf("Opcion no valida!\n");
            break;
        }
    } while (repetir);
    return 0;
}
