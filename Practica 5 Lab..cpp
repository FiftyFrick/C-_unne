#include <stdio.h>

int main (){
	float Metr, Cen, Mil, TMil ;
	printf ("ingrese los METROS: ");
	scanf ("%f", &Metr);
	printf("ingrese los CENTIMETROS: ");
	scanf("%f", &Cen);
	printf("ingrese los MILIMETROS: ");
	scanf("%f", &Mil);
	TMil= (((Metr*10) +Cen) *10) + Mil;
	printf("el total de MILIMETROS es de: %.2f", TMil );
		return 0; 
	
}
