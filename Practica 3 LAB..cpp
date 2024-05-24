#include <stdio.h>

int main () {
	float Ra1, Ra2, TRac ;
	printf(  "ingrese la racion del dia l y luego la del dia 2");
\
	scanf ("%f", &Ra1);
	scanf ("%f", &Ra2);
	TRac= Ra1 + Ra2;
\
	  if (TRac > 12) {
	  	printf ( "El total de raciones esta fuera del rango permitido, " );
\
	  }
    printf( "El total de raciones es: %.2f", TRac);
\
	return 0;
}
