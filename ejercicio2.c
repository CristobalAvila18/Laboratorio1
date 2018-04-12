/*En el siguiente algoritmo, obtendremos cuanto tiene que pagar cada amigo que va un restaurante
incluyendo el iva y la propina de este
declaramos las variables, en este caso son 6
ingresamos el total de nuestro consumo sin incluir el iva y la propina
el algoritmo nos calculara el iva y la propina del monto que hayamos ingresado
nos arrojara el resultado final y nos pedira el numero de amigos
una vez ingresado nos dira cuanto tiene que pagar cada uno.
*/
#include <stdio.h>
int main()
{
	float total, toiva, toprop, cuno, totfin, friend;
	printf("ingrese el total de su consumo \n");
	scanf("%f",& total);
	
	toiva= (19*total)/100;
	toprop= (10*total)/100;
	totfin= (total+toiva+toprop);

	printf("su total incluyendo la propina (10%) y el iva (19%) es:%f", totfin);
	printf("\n");
	
	printf("ingrese la cantidad de amigos \n");
	scanf("%f",& friend);
	
	cuno=(totfin/friend);
	printf("cada uno debe pagar:%f", cuno);
	printf("\n");
	return 0;
}

