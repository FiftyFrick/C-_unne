#include <stdio.h>

int main () {
	float b = 123000.567;
	printf ("variable b (float): \n\n" );
	printf("\t Como float %.6f: \n", b);
	printf ("\t Mostrando el signo %d: \n", b);
	printf("\t Notacion cientifica (mantisa/esponente) %e: \n", b);
	printf("\t Con solo 1(un) caracter para la parte decimal: %1f \n", b);
	printf ("\t Como entero %i: \n", b);
	return 0;
	
	
}
