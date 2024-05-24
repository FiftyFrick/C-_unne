#include <stdio.h>

int main () {
	float nota1, nota2, promedio;
	printf(  "ingrese la nota del parcia l y 2 ");
	scanf("%f, %f", &nota1, &nota2 );
	promedio = (nota1+nota2) /2;
	printf( "el promedio del alumno es: %.2f", promedio );
	return 0	;
}




