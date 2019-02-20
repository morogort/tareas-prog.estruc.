/*
E.P. que lea el nombre, la antig�edad y sueldo de cada uno de los 100
empleados y que calcule e imprima la cantidad que le corresponde a
cada uno
Nombre:47
Autor: Los Compiladores
Fecha : 13Feb19
Entradas: el nombre, la antig�edad y sueldo
Salidas: la cantidad que le corresponde a cada uno
Procedimiento General: Leer nombre, antiguedad y respecto a la antiguedad imprime el suldo con un bono 
Antiguedad Porcentaje
De 1 a 3 a�os 1 %
De 4 a 6 a�os 3 %
De 7 a 9 a�os 5 %
De 10 a 15 a�os 7 %
*/

#include <stdio.h>
#include <stdlib.h>
#define Aumentode1 0.01
#define Aumentode2 0.03
#define Aumentode3 0.05
#define Aumentode4 0.07
#define Empleados 100

int main(int argc, char *argv[]) {
	
	char Nombre[60];
	float Antiguedad;
	float Sueldo;
	int i=0;
	int w=0;
	
	
	for(i=0; i<Empleados; i++){
		
		
		//Entrada del Nombre
		printf("Dime el nombre del trabajador Numero %d: ",i+1);
		gets(Nombre);
		
		do{
			//Entrada Antiguedad
			printf("Dime la antiguedad que tiene: ");
			scanf("%f",&Antiguedad);
			//validar la Antiguedad
			if(Antiguedad>=0){
				
				w=1;
				
			}else printf("NO metas numeros negativos\n");
			
			
		} while(w==0);
		w=0;
		do{
			//entrada de Sueldo
			printf("Dime el sueldo del trabajador %d: $",i+1);
			scanf("%f",&Sueldo);
			
			//Validar el Sueldo
			if(Sueldo>=0){
				
				w=1;
				
			}else printf("NO metas numeros negativos");
			
			
		} while(w==0);
		
		
		//Aplica icentivo
		if(Antiguedad >=1 && Antiguedad<4){
			
			Sueldo = (Sueldo + (Sueldo * Aumentode1) );
			system("cls");//limpia el panel
			
		}else if(Antiguedad >=4 && Antiguedad<7){
			
			Sueldo = (Sueldo + (Sueldo * Aumentode2) );
			system("cls");//limpia el panel
			
		}else if(Antiguedad >=7 && Antiguedad<10){
			
			Sueldo = (Sueldo + (Sueldo * Aumentode3) );
			system("cls");//limpia el panel
			
		}else if(Antiguedad >=10 && Antiguedad<16){
			
			Sueldo = (Sueldo + (Sueldo * Aumentode4) );
			system("cls");//limpia el panel
		}
		
		//Salida 
		printf("\n*****************************************************\n");
		printf("El nombre del trabajador %d es %s",i+1 , Nombre);
		printf("\nSu sueldo con incentivo es: $%.2f",Sueldo);
		printf("\n*****************************************************\n");
		
		getchar();//espera a que des enter o aprietes una tecla para seguir
		getchar();//espera a que des enter o aprietes una tecla para seguir
		system("cls");//limpia el panel
		
		
		
		
	}
	
	
	
	
	
	
	
	
	return 0;
}

// Funciona bien
// El uso de los #define es un poco redundante, ya que al realizar la multiplicaci�n, solo hace que se
// escriba m�s. (Sueldo * Aumentode1) vs (Sueldo * 0.01)
// Revisado por Abigael Arjona
