#include <stdio.h>

int main (){
	float Mbytes, Gbytes ;
	printf ("ingrese la cantidad de Megabytes que quiera convertir,");
	scanf ("%f", &Mbytes);
	Gbytes= Mbytes *1024;
	printf("el total de Gigabytes es de: %.2f", Gbytes );
		return 0; 
	
}
