#include <stdio.h>

int main () {
/* sección de declaración de variables */
   int cantidad;
   float precio;
   float total;
   float bonif;
/* inicialización de variables auxiliares*/
   total = 0.0;
   
/* ingresarDatos */
printf("ingrese la cantidad del producto: \n");
scanf("%d", &cantidad);
printf("ingrese el precio del producto: \n");
scanf("%f", &precio);

/* calcularImporteTotal */
total = cantidad * precio;
if (total >= 500 || cantidad > 5) {
bonif = total * 0.15;
total = total - bonif;
 }
 
/* mostrarImporteTotal */
printf("Total: $ %4.2f\n", total);
return 0;

}
