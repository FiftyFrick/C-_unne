#include <stdio.h>

void tipodeentrada (float, int);

int main(){

	float  entrada, total ;
    int tipentrada, anti;
    char anticipada = 'S' , noanticipada = 'N';
    
 
	printf ("Bienbenido al sistema de imprecion de entradas\n");
	
    tipodeentrada(entrada, tipentrada );

	
		
		
// Entrada Anticipadas //

	printf ("\n marque si su entrada es:  1- anticipada, o  2- si no anticipada \n");
	scanf ("%i", &anti);
	printf("\nUsted a marcado: %.0f \n", anti);

// Entradas anticipadas//

	if (anti <= 1){

		if (entrada >= 100){

		    	total = entrada - (entrada * 0.20);
				printf ("\nSu tipo de entrada Anticipada es Con Consumicion,  y su importe a pagar es: %.2f, %c \n", total, anticipada );
			
	    }else{
		
			    total = entrada - (entrada * 0.20);
				printf("\nSu tipo de entrada Anticipada es Sin Consumicion, y su importe a pagar es: %.2f, %c \n", total, anticipada );
		      }
		  
   }else{
	
         // Entrada NO anticipadas//		

		   total = entrada;
			     
               if (total >= 100){

	         	printf("\nSu tipo de entrada NO anticipada es Con Consumicion, y su importe a pagar es: %.2f, %c \n", total, noanticipada );

    	         }else{
    	      
			            printf("\nSu tipo de entrada NO Anticipada es Sin Consumicion, y su importe a pagar es: %.2f, %c \n", total, noanticipada );
	             
			   }
	}

	return 0;
}


void tipodeentrada (float entrada, int tipentrada){

	printf("\nMarque si la entrada es 1 - Con consumicion, o 2 - Sin consumicion \n");
    scanf ("%i", &tipentrada);
    printf("\nUsted selecciono la opcion: %.1i", tipentrada);
    
if ( tipentrada <= 1  ){
		*(&entrada) = 100;   
} 
else {
    	*(&entrada) = 80;	
	}	
	printf("\nEl monto de su entrada es: %.2f \n ", entrada);

}

	
