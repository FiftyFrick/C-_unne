#include <stdio.h>
int main(){
/* secci�n de declaraci�n de variables */
int N,i,suma;
/* inicializaci�n de variables auxiliares*/
i=0;
suma=0;
/* ingresarDatos */
printf("ingrese el valor N: \n");
scanf("%d", &N);
/* MostrarySumarLosNnumeros*/
for(i=1;i<=N;i++){
suma=suma+i;
printf("El valor de i es %d \n", i);
}
/* mostrarSuma */
printf("La suma total de 1 hasta %d es %d \n", N, suma);
return 0;
}

