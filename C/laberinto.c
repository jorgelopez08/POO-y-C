#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define col 50
#define row 20
int main(void)
{
    int posX[15], posY[15], y, x;
    char letra = '_';
    int pX = 25, pY = 10;
    char mundo[row][col];
    char dir;
    srand(time(NULL));
    //Inciar fondo
    for (int j = 0; j < row; j++){
        for (int i = 0; i < col; i++)
        {
            if (i == 0 || j == 0 || j == row - 1 || i == col - 1)
                mundo[j][i] = '|';
            else
                mundo[j][i] = ' ';
        }
    }
    for (int i = 0; i < 20; i++)
    {
        posX[i] = rand() % row;
        posY[i] = rand() % col;
        mundo[posX[i]][posY[i]] = '|';
    }

    do
    {
        //poner personaje
        mundo[pY][pX] = 'u';
        for (int i = 0; i < row; i++)
        {
            mundo[posX[i]][posY[i]]='|';
        }
        
        //Imprimir mundo
        if ((pY > 0 && pY < row - 1) && (pX > 0 && pX < col - 1)   )
        {
            printf("\033[0;0H\033[2J");
            for (int j = 0; j < row; j++)
            {
                for (int i = 0; i < col; i++){
                    printf("%c", mundo[j][i]);
                }
                printf("\n");
            }
            printf("\n");
            mundo[pY][pX] = ' ';
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
        }

    } while (dir != 'p');

    return 0;
}