/*Algoritmo utilizado para la contabilidad de votos
 * tenemos 3 candidatos enumerados del 1 al 3
 * hay que ingresar el voto correspondiente al numero del candidato
 * nos da la opcion de si queremos seguir votando o queremos finalizar el contador
 * una vez terminado el contador nos dara el resultado y el ganador
 * en caso de que la cantidad de votos nulos supere a los candidatos tendra que haber otra vuelta
 */
#include <stdio.h>

int main()
{
	int can1=0,can2=0,can3=0, nulos=0, voto;
	char final='c';
	
	while (final != 'f'){
		printf ("Ingrese su voto en numeros del 1 al 3: ");
		scanf ("%d", &voto);
		if (voto==1){
			can1++;
		}
		else if (voto==2){
			can2++;
		}
		else if(voto==3){
			can3++;
		}
		else{
			nulos++;
		}
		while (getchar()!='\n');
		printf ("Continuar?: ");
		scanf ("%c", &final);
	}
	
	printf("Para el candidato 1 hay:%d", can1);
	printf("\n");
	printf("para el candidato 2 hay:%d", can2);
	printf("\n");
	printf("para el candidato 3 hay:%d", can3);
	printf("\n");
	printf("votos nulo hay:%d", nulos);
	printf("\n");

	if ((can1 > can2) && (can1 >= can3)){
		printf("El ganador es el Candidato 1");
	}
	else if ((can2 > can1) && (can2 >= can3)){
		printf("El ganador es el Candidato 2");
	}
	else if ((can3 > can1) && (can3 >= can2)){
		printf("El ganador es el Candidato 3");
	}
	else{
		printf("no se ha podido determinar el ganador, se hara una segunda vuelta");
	}
	return 0;
}

