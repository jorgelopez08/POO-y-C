#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a,b, c, discriminante, general1, general2;

    
    printf("Ingresa a: ");
    scanf("%f",&a);
    printf("Ingresa b: ");
    scanf("%f",&b);
    printf("Ingresa c: ");
    scanf("%f",&c);

    discriminante = (b*b)-4*(a)*(c);
    general1 = (-(b)+sqrt((b*b)-4*(a)*(c)))/2*(a);

    if (discriminante > 0)
    {
        printf("seran reales y diferentes\n");
    }else if(discriminante == 0){
        printf("seran reales e iguales\n");
    }else{
        printf("serian compleajas\n");
    }
    
    
    return 0;
}
