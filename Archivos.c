/*			DANIELA ESTUPIÑAN---PARALELO 1 **FILA 2**
 Realizar un programa usando funciones que permite generar la serie de n numeros pares y la tabla de multiplicar de cualquier numero..Demostrar si es par o impar*/
     
#include <stdio.h>
#include <locale.h>

void ingresoDatosPares(int);
void ingresoDtsTabla(int,int);
void seriePares(int);
void tablaMultiplicar(int,int);
void ingresoDtos(int);
void parImpar(int);

FILE *archivo; //DECLARACIÓN GLOBAL
void main()
{
	int cantNum,tabla,lim,num;
	setlocale(LC_ALL,"spanish");
	archivo=fopen("datos.txt","w");
	ingresoDatosPares(cantNum);
	ingresoDtsTabla(tabla,lim);
	ingresoDtos(num);
}
void ingresoDatosPares(int cantNum)
{
	printf("Ingrese la cantidad de números:");
	fputs("Ingrese la cantidad de números:",archivo);//sirve para escribir strings
	scanf("%d",&cantNum);
	fprintf(archivo,"%d\n",cantNum);//parecido al printf
	seriePares(cantNum);
}
void seriePares(int cantNum)
{
	int cont=1,par=0;
	while(cont<=cantNum)
	{
		par=par+2;
		printf("%d\n",par);
		fprintf(archivo,"%d\n",par);
		cont++;
	}
}
void ingresoDtsTabla(int tabla, int lim)
{
	
	printf("Ingrese la tabla de multiplicar:");
	fputs("Ingrese la tabla de multiplicar:",archivo);
	scanf("%d",&tabla);
	fprintf(archivo,"%d\n",tabla);
	printf("Ingrese el límite:");
	fputs("Ingrese el límite:",archivo);
	scanf("%d",&lim);
	fprintf(archivo,"%d\n",lim);
	tablaMultiplicar(tabla,lim);
}
tablaMultiplicar(int tabla,int lim)
{
	int cont=1,mult=1;
	while(cont<=lim)
	{
		mult=cont*tabla;
		printf("%dX%d=%d\n",tabla,cont,mult);
		fprintf(archivo,"%dX%d=%d\n",tabla,cont,mult);
		cont++;
	}
}
void ingresoDtos(int num)
{
	printf("Ingrese el número a comprobar:");
	fputs("Ingrese el número a comprobar:",archivo);
	scanf("%d",&num);
	fprintf(archivo,"%d\n",num);
	parImpar(num);
}
parImpar(int num)
{
	if(num%2==0&&num>0)
	{
		printf("El número ingresado es par");
		fputs("El número ingresado es par",archivo);
	}
	else 
	{
		printf("El número ingresado es impar");
		fputs("El número ingresado es impar",archivo);
	}
}
