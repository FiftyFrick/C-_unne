#include <stdio.h>

int main (){
	float Hor, Min, Seg, TSeg ;
	printf ("ingrese la HORA");
	scanf ("%f", &Hor);
	printf("ingrese los MINUTOS");
	scanf("%f", &Min);
	printf("ingrese los SEGUNDOS");
	scanf("%f", &Seg);
	TSeg= (((Hor*60) +Min) *60) + Seg;
	printf("el total de SEGUNDOS es de: %.2f", TSeg );
		return 0; 
	
}
