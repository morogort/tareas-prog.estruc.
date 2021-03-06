/* 64. E.P. que lea una matriz de 15 X 13 elementos y que calcule e
imprima lo siguiente:
a) El elemento menor del arreglo.
b) El total de elementos negativos de la fila 10 a la 13.
c) El mayor elemento del arreglo.

Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Javier Alejandro Chim Cem�

Fecha: 11/marzo/2019
Version: 1.0*/

#include <stdio.h>
#include <conio.h>

#define FILAS 15
#define COLUMNAS 13

int main() {
	
	/*Declaramos las variables*/
	int i, j, cont_negativos = 0;
	
	/*Declaramos la matriz*/
	float matriz_numeros[FILAS][COLUMNAS], numero_menor, numero_mayor;
	
	/*Creamos un ciclo For para la lectura de los datos*/
	for (i = 0; i < FILAS; i++)
	{
		for (j = 0; j < COLUMNAS; j++)
		{
			/*ENTRADA de datos*/
			printf("\n\nInserte el n�mero de la fila %i�, columna %i� ", i + 1, j + 1);
			scanf("%f", &matriz_numeros[i][j]);
			
			numero_mayor = matriz_numeros[0][0];
			
			numero_menor = matriz_numeros[0][0];
			
			/*PROCESO para determinar el n�mero mayor*/
			if (matriz_numeros[i][j] > numero_mayor)
			{
				numero_mayor = matriz_numeros[i][j];
				
			} 
			
			/*PROCESO para determinar el n�mero menor*/
			if (matriz_numeros[i][j] < numero_menor)
			{
				numero_menor = matriz_numeros[i][j];
				
			}
			
			/*PROCESO para determinar los negativos*/
			if ((i >= 9 && i <= 12) && matriz_numeros[i][j] < 0)
			{
				cont_negativos++;
			}
		}
	}
	
	/*SALIDA de datos*/
	printf("\n\nEl n�mero mayor es: %.2f\n\nEl n�mero menor es: %.2f", numero_mayor, numero_menor);
	printf("\n\nEl total de elementos negativos entre la fila 10 y 13 son: %i", cont_negativos);
	
	getch();
	
	return 0;
}

