/******************************************************************************

Realizar un programa en C que permita ingresar por teclado los grados centígrados y
Fahrenheit y realice la conversión.

*******************************************************************************/

#include <stdio.h>                                                   //Declaracion de la libreria

void main()                                                         //Declaracion de variables
{
   float centigrados=0, fahrenheit=0;                              //Inicializacion de las variables:centigrados y fahrenheit
   printf("Ingrese grados centigrados:");                         //Impresion en pantalla del mensaje
   scanf("%f",&centigrados);                                     //Ingresar el valor de la variable centigrados
   printf("Ingrese grados en fahrenheit:");                     //Impresion en pantalla del mensaje
   scanf("%f",&fahrenheit);                                    //Ingresar el valor de la variable fahrenheit
   fahrenheit=(centigrados*9)/5+32;                           // Calculo matemático para convertir de centigrados a fahrenheit
   centigrados=(5*fahrenheit)/9-32;                          //Calculo matemático para convertir de fahrenheit a centigrados
   printf("Grados en fahrenheit:%.2f",fahrenheit);          // Impresion del valor con dos decimales de fahrenheit
   printf("\t\tGrados en centigrados:%.2f",centigrados);   // Impresion del valor con dos decimales de centigrados
   }