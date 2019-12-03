/******************************************************************************
Daniela Estupiñan----FILA 2
                         Funciones Matrices
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define tam 50
void inicializarVector(float[][tam]);
void ingresoDatos(int,int);
void diagonal(int,int);//delcaracion de la funcion
void main()
{
    float matriz[][tam]={{5.4,3.2},{7.8,2.1},{5.4,1.2}};
    int op=0, num,fil,col;
    while(op != 4)
    {
        printf("1.Inicialización del vector\n2.Ingreso de datos de la matriz\n3.Diagonal de la matriz\n4.Salir\n");
		printf("Ingrese la opcion:");
		scanf("%d",&op);
		
		switch(op)
		{
		    case 1:
		        inicializarVector(matriz);
		        getchar();
		        getchar();
		        system("clear");
		    break;
		    case 2:
		        printf("Ingrese el número de filas:");
		        scanf("%d",&fil);
		        printf("Ingrese el número de columnas:");
		        scanf("%d",&col);
		        ingresoDatos(fil,col);
		        getchar();
		        getchar();
		        system("clear");
		    break;
		    case 3:
		        printf("Ingrese el número de filas:");//Imprimir el mensaje para el ingreso del numero de filas
		        scanf("%d",&fil);//Lectura de las filas
		        printf("Ingrese el número de columnas:");//Imprimir el mensaje para el ingreso del numero de columnas
		        scanf("%d",&col);//Lectura de las columnas
		        diagonal(fil,col);//Llamada a la función
		        getchar();
		        getchar();
		        system("clear");//opcion para limpiar la pantalla
		    break;
		    case 4:
		        exit(0);
		    break;
		    default:
		    printf("Opción Incorrecta");
		    break;
		}  
    }
   
}
void inicializarVector(float arreglo[][tam])
{
    int i=0,j;
    while(i<3)
    {
        j=0;
        while(j<2)
        {
            printf("%.2f\t",arreglo[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
void ingresoDatos(int fil,int col)
{
    int i=0,j;
    float arreglo[tam][tam];
    while(i<fil)
    {
        j=0;
        while(j<col)
        {
            printf("Ingrese el elemento[%d][%d]:",i,j);
            scanf("%f",&arreglo[i][j]);
            j++;
        }
    i++;
    }
    
    i=0;
    
    printf("\nElementos de la matriz\n");
    
    while(i<fil)
    {
        j=0;
        while(j<col)
        {
            printf("%.1f\t",arreglo[i][j]);
            j++;
        }
        
        printf("\n");
        
        i++;
    }
   
}
void diagonal(int fil,int col)//declaración de la función
{
    int i=0,j;//delcaración de la variable
    int arreglo[tam][tam];//declaracion de la variable
    
    while(fil!=col)//condicion en caso de que la fila sea distinta a la columna
    {
        printf("\n\tINGRESE NUEVAMENTE UNA MATRIZ CUADRATICA\n");
        printf("Ingrese el número de filas:");//Imprimir el mensaje para el ingreso de filas
		scanf("%d",&fil);//Lectura de la fila ingresada
		printf("Ingrese el número de columnas:");//Imprimir el mensaje para el ingreso de columnas
		scanf("%d",&col);//Lectura de la columna
    }
    
    while(i<fil)//condicion para que se repita mientas la fila sea mayor a la variable "i"
    {
        j=0;//inicializacion de j en 0
        while(j<col)//condición para que se repite mientras la columan sea mayor a la vairbale "j"
        {
            printf("Ingrese el elemento[%d][%d]:",i,j);//Impresion del mensaje para el ingreso de los datos de la matriz
            scanf("%d",&arreglo[i][j]);//Lectura de los datos ingresados de la matriz
            j++;//Suma en 1 la variable j
        }
        
        i++;///Se suma en 1 la variable i
    }
    
    i=0;//incializacion de la varible i en 0 
    
    printf("\nElementos de la matriz\n");//Impresion del mensaje 
    
    while(i<fil)//mientras la fila sea mayor a i
    {
        j=0;//inicializa j en 0
        while(j<col)//mientras la columna sea mayor a j
        {
            printf("%d\t",arreglo[i][j]);//imprimir el arreglo
            j++;//sumar j en 1
        }
        
        printf("\n");//impresion de salto de linea
        
        i++;//suma en 1 la 1 
    }
    i=0;//inciializacion de i en 0 
    j=0;//inicialiazacion de j en 0 
    printf("\n");//salto de linea
    printf("\nElementos de la diagonal\n");//impresion del mensaje
    
    while(i<fil)//mientras la fila sea mayor a i
    {
            printf("%d\n",arreglo[i][j]);//impresion de la diagonal
            j++;//se suam en 1 la j 
            i++;//se suma en 1 la i
    }
}
