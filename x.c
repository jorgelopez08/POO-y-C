#include <stdio.h>
#include <stdlib.h>
/* #include <windows.h> */
#include <string.h>
/* #include <conio.h> */

int AnimalesRegistrados = 0;

//ESTRUCTURA
struct Animales{
    char nombre_animal[40];
    char edad_animal[40];
    char peso_animal[40];
    char tipo_animal[40];
    int ID;
    char nombre_duenio[40];
    char direccion[100];
    char telefono[20];
};
//DECLARACION DE ESTRUCUTRA
struct Animales animales[100];

//PROTOTIPOS
void agregar();
void Buscar_ID();
void buscarMascota();

int main()
{

    int opc;

    do
    {
        printf("*\nBIENVENIDO A LA BASE DE DATOS PETS*\n");
        printf("\n");
        printf("1.- Agrega mascota a la base de datos\n");
        printf("2.- Mostrar mascotas\n");
        printf("3.- Eliminar mascota de la base de datos\n");
        printf("Seleccione una opcion:\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            agregar();
            break;
        case 2:
            system("CLS");
            printf("1.- Mostrar mascotas por orden alfabetico\n");
            printf("2.- Buscar una mascota en particular\n");
            printf("3.- Buscar por tipo de mascota\n");
            printf("4.- Buscar por duenio\n");
            printf("Seleccione una opcion:\n");
            scanf("%d", &opc);
            switch (opc)
            {
            case 1:

                break;

            case 2:
                Buscar_ID();
                break;

            case 3:
                buscarMascota();
                break;

            case 4:

                break;
            }
            break;

        case 3:

            break;
        }

    } while (opc < 4);
    return 0;
}

void agregar()
{
    system("CLS");
    printf("DAME EL NOMBRE DE LA MASCOTA:\n");
    getchar();
    fgets(animales[AnimalesRegistrados].nombre_animal, 40, stdin);
    printf("DAME LA EDAD DE LA MASCOTA:\n");
    fgets(animales[AnimalesRegistrados].edad_animal, 40, stdin);
    printf("DAME EL PESO DE LA MASCOTA:\n");
    fgets(animales[AnimalesRegistrados].peso_animal, 40, stdin);
    printf("DAME EL TIPO DE ANIMAL:\n");
    fgets(animales[AnimalesRegistrados].tipo_animal, 40, stdin);
    printf("CODIGO DE LA MASCOTA:\n");
    scanf("%d", &animales[AnimalesRegistrados].ID);
    printf("NOMBRE DEL DUENIO:\n");
    getchar();
    fgets(animales[AnimalesRegistrados].nombre_duenio, 40, stdin);
    printf("DIRECCION:\n");
    fgets(animales[AnimalesRegistrados].direccion, 100, stdin);
    printf("TELEFONO:\n");
    fgets(animales[AnimalesRegistrados].telefono, 20, stdin);

    AnimalesRegistrados++;
    system("CLS");
}

void Buscar_ID()
{
    system("CLS");

    if (AnimalesRegistrados != 0)
    {
        int bandera = 0, ID, i;
        printf("Ingresa el c\242digo de la mascota que deseas conocer:\n");
        scanf("%d", &ID);
        system("CLS");

        for (i = 0; i < AnimalesRegistrados; i++)
        {
            if (ID == animales[i].ID)
            {
                printf("\nMASCOTA ENCONTRADA !! ");
                printf("\nNombre de la Mascota:%s", animales[i].nombre_animal);
                printf("\nEdad:%s ", animales[i].edad_animal);
                printf("\nPeso:%s", animales[i].peso_animal);
                printf("\nTipo de mascota:%s", animales[i].tipo_animal);
                printf("\nNombre del duenio:%s", animales[i].nombre_duenio);
                printf("\nDireccion:%s", animales[i].direccion);
                printf("\nTelefono:%s\n", animales[i].telefono);
                printf("\n----------------------------------\n");
                bandera = 1;
                printf("\nPresione una tecla para volver al menu\n");
                getchar();
                system("CLS");
            }
        }
        if (bandera == 0)
        {
            printf("\nDicho alumno no existe o no ha sido registrado");
            printf("\nPresione una tecla para volver al menu:\n");
        }
    }
}
void buscarMascota()
{
    system("CLS");
    int bandera = 0;
    char tipo[40];
    getchar();
    printf("Ingresa el tipo de mascota que quieres buscar:\n");
    fgets(tipo,40,stdin);

    for (int i = 0; i < AnimalesRegistrados; i++)
    {
        if (strcmp(animales[i].tipo_animal, tipo)==0){
            printf("\nMASCOTA ENCONTRADA !! ");
            printf("\nNombre de la Mascota:%s", animales[i].nombre_animal);
            printf("\nEdad:%s ", animales[i].edad_animal);
            printf("\nPeso:%s", animales[i].peso_animal);
            printf("\nTipo de mascota:%s", animales[i].tipo_animal);
            printf("\nCodigo:%d", animales[i].ID);
            printf("\nNombre del duenio:%s", animales[i].nombre_duenio);
            printf("\nDireccion:%s", animales[i].direccion);
            printf("\nTelefono:%s\n", animales[i].telefono);
            printf("\n----------------------------------\n");
            bandera = 1;
            printf("\nPresione una tecla para volver al menu\n");
            getchar();
            system("CLS");
        }
    }
    if (bandera == 0)
    {
        printf("\nDicho alumno no existe o no ha sido registrado");
        printf("\nPresione una tecla para volver al menu");
        getchar();
    }
}
