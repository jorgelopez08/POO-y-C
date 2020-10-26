#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i=0;

    while (i<10)/*se evalua la condicion y se van a ejecutar las instrucciones mientras 
                    la condicion seaverdadera*/
    {
        printf("%d",i+1);
        i=i+2;
    }
    
    for (i = 0; i < 10; i++) /* se va a ejecutar el numero de veces mientras la condición se verdadera
                                generalmente se usa para repetir algo cuando se sabe las veces que se
                                va a repetir*/
    {
        printf("%d",i+1);
    }

    i=0;
    do/*se usa para ejecutar por lo menos una vez y luego se evalua la condicion, si es verdadera
    la condicion se vuelve a ejecutar*/
    {
        printf("%d",i);
        i = i+1;
    } while (i<10);
    
    return 0;
}
