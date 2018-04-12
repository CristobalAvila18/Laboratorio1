/*el siguiente algoritmo nos permitira saber el descuento aplicado a el traje que hayamos comprado
 * anotamos las variables
 * ingresamos el precio del traje que compraremos
 * si la prenda tiene un valor superior a 250.000 nos aplicara un descuento de 15%
 * si es menor a este precio nos aplica un descuento de 8%
 * finalmente nos arrojara el resultado que corresponda
 */

#include <stdio.h>

int main()
{
	float d1,d8,monto, monfin1,monfin8=0,x=250000;
	printf("ingrese el valor del traje para calcular su descuento \n");
	scanf("%f",&monto);
	if (monto > x) {
		d1= (monto*15)/100;
		monfin1= (monto-d1);
		printf("el precio final del traje con un 15 porciento de descuento es:%f", monfin1);
		printf("\n");
	}
	
    else if(monto <= x) {
		d8= (monto*8)/100;
		monfin8= (monto-d8);
		printf("el precio final del traje con un 8 porciento de descuento es: %f", monfin8);
		printf("\n");
	}
	return 0;
}

