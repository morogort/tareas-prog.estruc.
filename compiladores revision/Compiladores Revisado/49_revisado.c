/*
49. E.P. que lea las calificaciones de 50 alumnos y que determine e
imprima cuantos tienen calificaci�n mayor al promedio del grupo.
Nombre:49
Autor: Los Compiladores
Fecha : 13Feb19
Entradas: Calificaciones de 50 alumnos
Salidas: cuantos tienen calificaci�n mayor al promedio de grupo.
Procedimiento General: Leer dos veces las calificaciones e imprimir cuantos tienen calificaci�n mayor al promedio de grupo.
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	
	float Calificacion_A; 
	int Cantidad_ACPMADG=0; //Alumnos Con Promedio Mayores Al De el Grupo
	int i;
	float Promedio_G=0;
	//numbres muy largos en sus variables, �no es mas comodo usar palabras resumidas?
	for(i=0; i<50; i++){
		//entrada para sacr promedio grupal
		printf("Dime la calificacion del alumno Numero %d:  ", i+1);//confunde menos user el i=1, pero creo que es preferencia personal,as� que pueden ignorar este comentario
		scanf("%f",&Calificacion_A);
		
		Promedio_G=(Promedio_G + Calificacion_A);
		
		system("cls"); //aunque es una funcion sencilla y no tiene ningun problema, le profesor no la ha ense�ado
		
	}
	//Sacar el promedio grupal
	Promedio_G=(Promedio_G/50);
	
	for(i=0; i<50; i++){
		//Entrada para sacar cuantos estudiantes tienen promedio mayor al promedio grupal
		printf("vuelve a decir la calificacion del alumno Numero %d:  ", i+1);
		scanf("%f",&Calificacion_A);
		
		if(Calificacion_A>Promedio_G){
			
			Cantidad_ACPMADG=(Cantidad_ACPMADG +1);
		}
		
		system("cls");
		
	}
	
	//imprime si fue 1, mas que uno o ninguno respecto a los alumnos con promedio mayor al grupal
	//Uso del if para que lo impreso tenga logica
	if(Cantidad_ACPMADG==1){
		
		printf("Solo 1 Alumno obtuvo promedio mayor al promedio grupal");
		
	} else if(Cantidad_ACPMADG>1){
		
		printf("La cantidad de Alumnos con promedio mayor al promedio grupal son %d Alumnos",Cantidad_ACPMADG);
		
	}else {
		printf("Ningun alumno tiene Promedio mayor al promedio grupal");
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
