#include <stdio.h>

int main () {
	float  alTotal, aluApro, porApro;
		printf(" Ingrese la cantidad de alumnos totales:   ");
		scanf ("%f", &alTotal);
		printf ("\t El total de alumnos aprobados:   ");
		scanf ("%f", &aluApro);
		porApro= (aluApro * 100) / alTotal ;
		printf("\t El porcentaje de alumnos aprovados es de: %2.f  ", porApro );
	return 0;
}

