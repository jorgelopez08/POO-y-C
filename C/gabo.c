#include <stdio.h>
#include <stdlib.h>

int letraEnCadena(char* cadena,char *c);
int factorial(int i);

int main(int argc, char const *argv[])
{
    int repetir=1, i;
    char cadena[20], letra;
    do
    {
        printf("Ingrese una palabra (max 20 letras): ");
        fgets(cadena,20,stdin);
        printf("Ingrese una letra a buscar en la cadena: ");
        scanf("%c", &letra);
        i = letraEnCadena(cadena, &letra);
        if (i>=0)
        {
            printf("el factorial de la posicion de la letra es: %d\n", factorial(i));
        }else{
            printf("No se encontro la letra\n");
        }
        
        printf("Desea ingresar otra palabra (1. Si 2. No)? ");
        scanf("%d", &repetir);
        getchar();
    } while (repetir==1);
    
    return 0;
}

int letraEnCadena(char* cadena,char *c){
    for (int i = 0; i < 20; i++)
    {
        if (cadena[i]== *c)
        {
            return i;
        }
    } 
    return -1;
}

int factorial(int i){
    for (int x = i-1; x > 0; x--)
    {
        i *= x;
    }
    return i;
}