#include <stdio.h>

int main (){
	float Disc1, Disc2, CapTotal ;
	printf ("ingrese el almacenamiento del disco 1");
	scanf ("%f", &Disc1);
	printf("ingrese el almacenamiento del disco 2");
	scanf("%f", &Disc2);
	CapTotal= Disc1+Disc2 ;
	printf("el total de almacenamiento entre los dos discos es de: %.2f", CapTotal );
	
	return 0; 
	
}
