#include <stdio.h>

int main() 
{
	float e,t,pro,pa,total;
	/* e=examenes, t=trabajos, pro=proyecto, pa=participacion */
	printf ("Escriba el porcentaje de calificacion(max. 100) conjunta de los dos examenes: ");
	scanf ("%f",&e);
	printf ("Escriba la calificacion en tareas y trabajos: ");
	scanf ("%f",&t);
	printf ("Escriba la califiacion del proyecto final: ");
	scanf ("%f",&pro);
	printf ("Escriba la calificacion de la participacion en clase: ");
	scanf ("%f",&pa);
	total=(e*40.0/100)+(t*30.0/100)+(pro*20.0/100)+(pa*10.0/100);
	/* salida */
	printf ("El total de calificacion es: %.2f",total);
}
