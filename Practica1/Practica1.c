#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rellenaArreglo(int* , int);
void imprimeArreglo(int* , int);
void swap(int* , int* );
void bubbleSort(int* , int);


void main(void){
	int valorUsuario;
	printf("Introduzca un numero entero: ");
    scanf("%d", &valorUsuario);
	int i, tam;
	int* vector = (int*)malloc(sizeof(int) * valorUsuario);
	int* aux;
	if(vector){
		aux = vector;
		rellenaArreglo(aux, valorUsuario);
		imprimeArreglo(aux, valorUsuario);
		bubbleSort(aux, valorUsuario);
		printf("\n\nDespues de la iteracion: \n\n");
		imprimeArreglo(aux, valorUsuario);
	}
	else
		printf("\n Error");	
}

void rellenaArreglo(int* a, int valorUsuario){
	int i; 	
	srand(time(NULL));
	
	for(i = 0; i < valorUsuario; i++)	
		*(a++) = rand()%100;
	
}

void imprimeArreglo(int* a, int valorUsuario){
	int i;
	for(i = 0; i < valorUsuario; ++i)
		printf("%d, ", *(a++));
}

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubbleSort(int* a, int valorUsuario) 
{ 
	int* tmp = a+1;
	while(tmp != a + valorUsuario){
		if(*tmp < *(tmp-1)){
			swap(tmp,tmp-1);
			tmp = a+1;
		}
		else
			tmp++;
	}
} 
