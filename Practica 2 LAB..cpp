#include <stdio.h>

int main () {
	float nota1, nota2, nota3, promedio;
	printf(  "ingrese la nota del parcia l, 2 y 3");
	scanf("%f, %f, %f", &nota1, &nota2, &nota3 );
	promedio = (nota1+nota2+nota3) /3;
	printf( "el promedio del alumno es: %.2f", promedio );
	return 0	;
}
