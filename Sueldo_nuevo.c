/******************************************************************************

Una empresa clasifica a sus empleados en dos grupos de
empleados, los del grupo 1 son aquellos que laboran dentro de la misma y
desean darles un aumento de sueldo siguiendo el siguiente criterio: si el
empleado trabajó más de 40 horas, su sueldo será incrementado en $50.00, si
el empleado es mujer o es mayor de 25 años y tiene en la empresa más de 30
años su sueldo se incrementará en $800.00 y si no cumple con estas
condiciones solo se incrementa en $100.00 (esto último es independiente de
las horas trabajadas), Para los empleados del grupo 2 (los que aspiran a
ingresar a la empresa)si es mayor de 18 años y tiene más de 85 puntos en una
prueba presentada entonces será contratado. Elaborar un programa para
determinar el sueldo de una persona en el caso de los empleados del grupo 1 y
si será o no contratado en el caso de los del grupo 2. El número de cédula es
un número entero.

*******************************************************************************/

#include <stdio.h>

void main()
{
int sueldo,edad,continuidad,grupo,puntos,horas_trabajo,sueldo_nuevo; //Declaración de variables
printf("Ingrese al grupo al que pertenece:");//Imprimir el mensaje 
scanf("%d",&grupo);//Leer el grupo
printf("Ingrese su sueldo actual:");
scanf("%d",&sueldo);
if(grupo==1) //condicion para ver a que grupo pertenece
{             //si es verdadero se ejecutara lo siguiente:
    printf("Ingrese su edad:");  //Imprime el mensaje
    scanf("%d",&edad); //Lee la edad 
    printf("Ingrese sus horas_trabajo:"); //Imprime el mensaje
    scanf("%d",&horas_trabajo); //Lee la edad 
    printf("Ingrese su continuidad en el trabajo:");//Imprime el mensaje
    scanf("%d",&continuidad); //Lee la continuidad
    
    if(edad>25 && continuidad>30)//condicion para la edad y la continuidad
     {
        sueldo_nuevo=sueldo+800; //operacion para el nuevo sueldo
        printf("Su sueldo nuevo es:%d",sueldo_nuevo); //imprimir el nuevo sueldo
     }
    else if(horas_trabajo>40) //condicion donde se evalua las horas de trabajo
    {
        sueldo_nuevo=sueldo+50; //operacion para el nuevo sueldo
        printf("Su sueldo nuevo es:%d",sueldo_nuevo);//imprimir el nuevo sueldo
    }
    else
       printf("No hay aumento de sueldo");// caso contrario imprimira el mensaje de que no hay aumento
}
else //si pertenece al grupo 2
{
    printf("Ingrese su edad:");//mensaje para ingresar la edad
    scanf("%d",&edad);//lee la edad
    printf("Ingrese sus puntos:");//mensaje para ingresas los puntos obtenidos
    scanf("%d",&puntos);//lee los puntos
    if(edad>18 && puntos>85)//condicion sobre la edad y los puntos
        printf("Esta contratado:");//si es verdadero imprimira que si esta contratado
    else 
        printf("No esta contratado");//si no imprimira que no esta contratado

}
}



