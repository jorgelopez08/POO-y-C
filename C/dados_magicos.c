#include <stdio.h>
#include <time.h>

int main (){
	
	int dado1,dado2,contador=0,suma;
	srand(time(NULL));
	printf("Dados magicos\n");
	printf("Si la suma de dos dados es 7 usted ganara \n");
	
	for (int i = 0; i < 10; i++)
    {
		dado1= rand() % 6+1;
		dado2= rand() % 6+1;
		suma= dado1+dado2;
		printf("El dado uno salio:  %d  y el dado dos salio : %d\n", dado1, dado2);
		if(suma==7){
            printf("Felicidades! Ganaste!\n");
		    contador++;
        }
	}
	
printf("Usted gano %d veces \n",contador);

}