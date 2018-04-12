/*nuestro algoritmo nos permite saber en que kilometro se encontraran ambos puntos
 * ingresamos la velocidad constante a la que van los 2 puntos
 * nos arrojara el resultado en que kilometros se encontraran
 * como ambos van a velocidad constante se toparan siempre en el mismo punto
 */

#include <stdio.h>
int main()

{
	float velo,punto,div,exa;
	printf("ingrese la velocidad constante que va \n");
	scanf("%f",&velo);
	div=(velo/10);
	punto= (div*(60/(div+div)));
	exa=(190+punto);
	printf("se encontraran en el kilometro:%f", exa);
	printf("\n");
	return 0;
}

