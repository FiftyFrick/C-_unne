#include <stdio.h>
int main(){
/* secci�n de declaraci�n de variables */
float sueldo;
float prestamo;
/* inicializaci�n de variables auxiliares*/
prestamo = 0.0;
/* ingresarDatos */
printf("ingrese importe del sueldo: \n");
scanf("%f", &sueldo);
/* calcularPrestamo */
if (sueldo >= 10000){
prestamo = 30000;
 }
else {
prestamo = sueldo * 0.75;
 }
/* mostrarPrestamo */
printf("Prestamo otorgado: $ %4.2f\n", prestamo);
return 0;
}

