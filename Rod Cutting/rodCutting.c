//Librerias usadas
#include<stdio.h>
#include<limits.h>
 
// Funcion que regresa el mayor de dos numeros
int max(int a, int b) { return (a > b)? a : b;}
 
/* Obtiene el mejor precio obtenible para una varilla de longitud n y precio[] como precios de diferentes piezas */
int cutRod(int price[], int n)
{
   int val[n+1];
   val[0] = 0;
   int i, j;
 
   // Crea la tabla de valores de abajo hacia arriba y devuelve la ultima entrada de la tabla.
   for (i = 1; i<=n; i++)
   {
       int max_val = INT_MIN;
       for (j = 0; j < i; j++)
         max_val = max(max_val, price[j] + val[i-j-1]);
       val[i] = max_val;
   }
 
   return val[n];
}
//Funcion que rellena el arreglo con numeros aleatorios del 1 al 100
void rellenaArreglo(int* a, int valorUsuario){
	int i; 	
	srand(time(NULL));
	
	for(i = 0; i < valorUsuario; i++)	
		*(a++) = rand()%100;
	
}
/* Main donde se prueban las funciones previamente codificadas. */
int main()
{
    int tamArr = 0;
    printf("Tamaño del areglo: ");
    scanf("%d", &tamArr);
    int *arr = (*int)malloc(sizeof(int*tamArr));
    rellenaArreglo(arr, tamArr);
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximo valor obtenido es %d", cutRod(arr, size));
    getchar();
    return 0;
}
