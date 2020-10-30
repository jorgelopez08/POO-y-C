#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z, cont, n;
    x = 0;
    y = 1;

    printf("ingrea n: ");
    scanf("%d", &n);
    /* printf("0\n1\n", z); */
    for (cont = 1; cont <= n; cont++)
    {
        z = x + y;
        printf("%d\n", z);
        x = y;
        y = z;
    }

    system("PAUSE");
    return 0;
}
