#include <stdio.h>

int main () {
	float CDs, PreUni, PrecTotal ;
	printf ("ingrese el precio por unidad de CDs: ");
	scanf ("%f", &PreUni);
	printf ("ingre la cantidad de CDs totales: ");
	scanf ("%f", &CDs);
	PrecTotal= CDs*PreUni ;
	printf ("El precio total de los CDs es de: %.2f", PrecTotal);
	return 0;
}
