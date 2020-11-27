#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* SECUENCIAL()
{
    char na[50], da[50], nc[50], nt[50];
    char* r = malloc(200);
    printf("Nombre del alumno:");
    gets(na);

    printf("Direccion del alumno:");
    gets(da);

    printf("Numero de celular:");
    gets(nc);

    printf("Nombre del tutor:");
    gets(nt);

    strcat(r, na);
    strcat(r, " ");
    strcat(r, da);
    strcat(r, " ");
    strcat(r, nc);
    strcat(r, " ");
    strcat(r, nt);

    return r;
}

void main()
{
printf("datos del alumno\n %s",SECUENCIAL());
}