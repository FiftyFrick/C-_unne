#include <stdio.h>

int main () {
	char a = 'Z';
    int b = 2147483647;
    short c = 32767;
	long d = 2147483647;
	float e = 3.4E+38;
	double f = 1.7E+308;
	
	printf("la longitud de la variable es de %d byte(s), su valor es %c y su tipo es char\n", sizeof (char), a, a);
	
	
	
	
	return 0;
}
