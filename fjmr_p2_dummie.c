/* DESCRIPCIÓN DEL CÓDIGO *********************************************/
/* Programa que realiza diferentes acciones básicas.      *************
 * *********************************************************************
 * *********************************************************************
 * Codificador: Mtro. Felipe de Jesús Miramontes Romero ****************
 * Fecha: dom 17 jul 2016 23:29                         ****************
 * E-mail: felipemiramontesr@gmail.com                  ****************
 * Perfíl Github: felipemiramontesr                     ****************
 * *********************************************************************
 */
 

/* Paquetes utilizados ~***********************************************/
#include <stdio.h>

/* Función autoejecutable ~********************************************/
int main(){

	/*Llamada a la función print() -> imprime un mensaje en pantalla*/
	imprime();

	/*Asignación de un valor entero a la variable "s" de tipo entero
	por medio de la llamada de la función sum() -> realiza una sumatoria
	entre dos números enteros y regresa el resultado de tipo entero.*/
	int s = suma();

	/*Imprimir en pantalla el mesaje y el valor contenido en la variable s*/
	printf("El resultado de la suma es: %d\n", s); 

	/*Asignación de un valor entero a la variable "r" de tipo entero
	por medio de la llamada de la función resta() -> realiza una resta
	entre dos números enteros y regresa el resultado de tipo entero.*/
	int r = resta(); 

	/*Imprimir en pantalla el mesaje y el valor contenido en la variable s*/
	printf("El resultado de la resta es: %d\n", r); 

	/*Asignación de un valor entero a la variable "sp" de tipo entero
	por medio de la llamada de la función suma_parametros() -> realiza 
	una suma entre dos parametros y regresa el resultado de tipo entero.*/
	int sp = suma_parametros(998,1); 

	/*Imprimir en pantalla el mesaje y el valor contenido en la variable s*/
	printf("El resultado de la suma de parametros es: %d\n", sp);

	/*Asignación de un valor entero a la variable "rp" de tipo entero
	por medio de la llamada de la función resta_parametros() -> realiza 
	una resta entre dos parametros y regresa el resultado de tipo entero.*/
	int rp = resta_parametros(1000,1); 

	/*Imprimir en pantalla el mesaje y el valor contenido en la variable s*/
	printf("El resultado de la resta de parametros es: %d\n", rp);}

/*Función print() -> Imprime "Fuck this world!" ***********************/
int imprime(){

	/*Imprimir mesaje en pantalla*/
	puts("Fuck this world!");}

/* Función suma() -> Realiza una suma *********************************/
int suma(){

	/* Declaración de variables de tipo entero */
	int a = 998;
	int b = 1;
	int c = a + b;

	/* Valor que regresa la función */
	return c;}
	     
/* Función resta() -> Realiza una resta *******************************/
int resta(){

	/* Declaración de variables de tipo entero */
	int a = 1000;
	int b = 1;
	int c = a - b;

	/* Valor que regresa la función */
	return c;}   

/* Función suma_parametros() -> Realiza una suma entre dos parametros */
int suma_parametros(int parametro_a, int parametro_b){

	/* Declaración de variables de tipo entero */
	int a = parametro_a;
	int b = parametro_b;
	int c = a + b;

	/* Valor que regresa la función */
	return c;}
	     
/* Función resta_parametros() -> Realiza una resta entre parametros ***/
int resta_parametros(int parametro_a, int parametro_b){

	/* Declaración de variables de tipo entero */
	int a = parametro_a;
	int b = parametro_b;
	int c = a - b;

	/* Valor que regresa la función */
	return c;
	     }