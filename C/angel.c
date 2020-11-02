#include <stdio.h>
#define col 50
#define row 20

int main(void)
{
    char letra = '_';
    int pX = 25, pY = 10, tab;
    char mundo[row][col];
    char dir;
    do
    {

        //Inciar fondo
        for (int j = 0; j < row; j++)
            for (int i = 0; i < col; i++)
            {
                if (i == 0 || j == 0 || j == row - 1 || i == col - 1)
                    mundo[j][i] = '|';
                else
                    mundo[j][i] = ' ';
            }
        //poner personaje
        mundo[pY][pX] = 'u';

        //Imprimir mundo
        if ((pY > 0 && pY < row - 1) && (pX > 0 && pX < col - 1))
        {
            printf("\033[0;0H\033[2J");
            for (int j = 0; j < row; j++)
            {
                for (int i = 0; i < col; i++)
                    printf("%c", mundo[j][i]);
                printf("\n");
            }
            printf("\n");
        }
        else
        {
            printf("No se puede ir más hacia ese lado\n");
        }
        scanf(" ");
        scanf("%c", &dir);
        switch (dir)
        {
        case 'a':
            pX--;
            break;
        case 'd':
            pX++;
            break;
        case 's':
            pY++;
            break;
        case 'w':
            pY--;
            break;
        case 'p':
            break;
        }
    } while (dir != 'p');

    return 0;
}