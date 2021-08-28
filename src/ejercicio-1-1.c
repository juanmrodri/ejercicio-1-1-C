/*
 =============================================================================================================
 Name        : ejercicio-1-1.c
 Author      : Juan Manuel
 Version     : 1.0.1
 Copyright   : no Copyright
 Description : Programa que pide numeros al usuario hasta que quiera, devuelve promedios positivos y negativos
 =============================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	/*
	============================================================================
	Declaramos variables pt.1
	============================================================================
	Inicializamos las que necesariamente tienen que ser inicializadas pt.2
	============================================================================
	*/


	char respuesta;
	int numeroIngresado;
	int cantidadPositivo=0;
	int cantidadNegativo=0;
	int acumuladorPositivos=0;
	int acumuladorNegativos=0;
	float promedioPositivos=0;
	float promedioNegativos=0;


	/*
	============================================================================
    pedimos los datos
	============================================================================
	*/

	do
	{
		printf("Por favor ingrese un numero: ");
		fflush(stdin);
		scanf("%d", &numeroIngresado);

		if(numeroIngresado>0)
		{
			// el numero es positivo
			cantidadPositivo=cantidadPositivo+1;
			acumuladorPositivos=acumuladorPositivos+numeroIngresado;
		}
		else
		{
			if(numeroIngresado<0)
			{
				// el numero es negativo
				cantidadNegativo=cantidadNegativo+1;
				acumuladorNegativos=acumuladorNegativos+numeroIngresado;
			}
		}

		printf("\n\nDesea ingresar otro numero?");
		fflush(stdin);
		scanf("%c", &respuesta);
	} while(respuesta=='s');

	/*
	============================================================================
	Sacamos los promedios
	============================================================================
	*/

	// promedio positivo
	promedioPositivos=acumuladorPositivos/cantidadPositivo;

	// promedio negativo
	promedioNegativos=acumuladorNegativos/cantidadNegativo;

	printf("\n\nEl promedio de los numeros positivos es %.2f y el promedio de los numeros negativos es %.2f", promedioPositivos,promedioNegativos);

	return EXIT_SUCCESS;
}
