#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int vectorA[5], vectorB[5], vectorC[5];
    int opc, repetir =1;
    srand(time(NULL));
    do
    {
        printf("1. LLenar vector A \t 2. Llenar vector B \t 3. Sumar A + B \n 4. Restar B - A \t 5. mostrar vector \t 6. Salir\n");
        printf("Seleccione una opcion:\n");
        scanf("%d", &opc);
        switch (opc){
        case 1:
            for (int i = 0; i < 5; i++){
                vectorA[i] = rand() /* % (-100 + 100 + 1) */ ;
            }
            break;
        case 2:
            for (int i = 0; i < 5; i++){
                vectorB[i] = rand() % (-100 + 100 + 1) ;
            }
            break;
        case 3:
            for (int i = 0; i < 5; i++){
                vectorC[i] = vectorA[i] + vectorB[i];
            }
            break;
        case 4:
            for (int i = 0; i < 5; i++){
                vectorC[i] = vectorB[i] - vectorA[i];
            }
            break;
        case 5:
            printf("1. Mostrar vector A \n 2. Mostrar vector B \n 3. Mostrar vector C\n Seleccione una opcion: ");
            scanf("%d", &opc);
            switch (opc)
            {
            case 1:
                for (int i = 0; i < 5; i++){
                    printf("%d ",vectorA[i]);
                }
                break;
            case 2:
                for (int i = 0; i < 5; i++){
                    printf("%d ",vectorB[i]);
                }
                break;
             case 3:
                for (int i = 0; i < 5; i++){
                    printf("%d ",vectorC[i]);
                }
                break;
            default:
                printf("Opcion no valida\n");
                break;
            }
            printf("\n");
            break;
        case 6:
            repetir = 0;
            break;
        default:
            printf("Opcion no valida\n");
            break;
        }
    } while (repetir);
    return 0;
}
