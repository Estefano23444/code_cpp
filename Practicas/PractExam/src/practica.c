#include <stdio.h>

/**
 * INSTRUCCIONES:
 * Este proyecto de generacion de series tiene una nota de 2 puntos.
 * 
 * Los prodedimiento a realizar deben crearse dentro del directorio /lib 
 * Los prodedimiento que se ejecutan correctamente se acredita con 0.1 puntos 
 * todos los procedimientos a desarrollar deben requerir un parametro que indicara el
 * numero de terminos de presentar de cada serie 
 * 
 **/

int getTerminosGenerar()
{	
/**
 *  La funcion getTerminosGenerar debe pedir la cedula y comparar con tu cedula.
 * 	Si la cedula ingresada no es valido debe mostrar un mensaje y abortar/salir de programa,
 *  caso contrario debe mostrar tu nombre y apellido. 
 * 	verificar si el ultimo digito de la cedula ingresada si es par o impar, En el caso de ser 
 *  par mostrar el mensaje "Se ejecutaran las series pares" y si es impar "Se ejecutaran las series impares" 
 *  segun corresponda.
 * 
 *  Pedir el ingreso del nro. de terminos a generar en las series, donde solo se
 *  aceptan numeros pares si tu ultimo digito es par o solo impar si tu ultimo digito fue impar. 
 *  Debe permitir varios intentos hasta que se ingrese un numero valido.
 * 
 *  Finalmente se debe retornar el numero de terminos que se deben generar en las series.
 * 
 *  Ejemplo:
 *  Ingresa tu cedula: 1103635..5
 *  Hola Patricio Paccha
 *  Se ejecutaran las series impares
 *  Ingresa la cantidad de terminos a generar: 3
 *  ...	
 **/

	int nroTerminos;
	// **do code**
	return nroTerminos;
}


void main()
{
//	Obligatorio: Crear la funcion getTerminosGenerar que retorna el nro de terminos a generar en las series.

/** SERIES:
	Crear un procedimiento para cada generar cada serie segun el nro de terminos que retorna la
	funcion getTerminosGenerar. Cada serie debe tener un color diferente.

	01:  0 1 1 2 3 5 8 13 ...      
	02:  + + ++ +++ +++++ ++++++++ +++++++++++++ ...
	03:  0/1  1/3  1/5  2/7  3/9   5/11  8/13  13/15 ...
	04:  0/2  1/4  1/6  2/8  3/10  5/12  8/14  13/16 ...
	05:  2	 3	 5 	7	11	13	17	19	23	29	31	37	41	43	47	...
	06:  ++	 +++ +++++ +++++++ +++++++++++ +++++++++++++ ...
	07:  1  4  7  10  13  16  19  22  25  ...
	08:  3, 8, 13, 18, 23, 28, 33, 38, ...
	09:  2, 4, 8, 16, 32, 64, 128, 256, ...
	10:  3, 9, 27, 81, 243, 729, 2187, ...
	
	11)  ...
		 123456789
		 12345678
		 1234567
		 123456
		 12345
		 1234
		 123
		 12
		 1

	12)  1
		 12
		 123
		 1234
		 12345
		 123456
		 1234567
		 12345678
	 	 123456789
		 ...

	13)	 ...
		 *********
		  *******
		   *****
		    ***
		     *
	
	14)      *
		    ***
		   *****
		  *******
		 *********
		 ...

	15)				 1
				   1    1
				1    2    1
		     1    3    3    1
		  1    4    6    4    1
		1   5   10    10    5   1
		....

	16)	1
		1	1
		1	2	1
		1   3   3    1
		1   4   6    4    1
		1   5   10   10   5   1
		....

	17) +				+
			-		-
				+
			-		-
		+				+
		....

	18) 1				1
			0		0
				1
			0		0
		1				1
		....
	
	19) 2
        1   2
        1   3   2
     	1   4   5   2
   		1   5   9   7  2
		1   6   14  16  9  2
		....
	
	20) *
        +   *
        +   3   *
     	+   4   5   *
   		+   5   9   7  *
		+   6   14  16  9  *
		....
	
	21) Pedir una frase y contador las vocales. 
		Ejemplo:  frase : ballena
				  salida: tiene 3 vocales 

	22) Pedir una frase y contador las letras.  
		Ejemplo:  frase : ballena
				  salida: tiene 4 letras

	23) Pedir una frase y una vocal, eliminar la vocal ingresada de la frase. 
		Ejemplo:  frase : ballena azul  
				  vocal : a
				  salida: b ll n   z l

	24) Pedir una frase y una letra, eliminar la letra ingresada de la frase. 
		Ejemplo:  frase : ballena azul  
				  letra : l
				  salida: ba  ena azu 

	25) Pedir una frase y presentarla inverida con las vocales en mayusculas. 
		Ejemplo:  frase : ballena
				  salida: AnEllAb 

	26) Pedir una frase y presentarla inverida con las letras en mayusculas. 
		Ejemplo:  frase : ballena
				  salida: aNeLLaB 
	*/
}