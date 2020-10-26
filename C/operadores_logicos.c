#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char letra;
    int vocal,i;
    
    vocal = (65 || 69 || 71 || 79 || 85 || 97 || 101 || 105 || 111 || 117); //una condicional dentro de una variable
    printf("Ingrese una letra: ");
    scanf("%c",&letra);

    switch (letra)
    {
    case 'a':
        printf("Es una vocal");
        break;
    case '-':
        printf("Caracter especial\n");
    default:
        printf("Una letra cualquiera\n");
        break;
    }

    if (vocal)
    {
        printf("Es una vocal\n");
    }
    
    if (1<2 && 3<5)
    {
        printf("Si es verdadero\n");
    }
    
    if (1>2 || 3<5)
    {
        printf("Uno de los dos fue verdadero\n");
    }

    printf("Podr%ca ingresar un n%cmero\n",161,163);


    return 0;
}
