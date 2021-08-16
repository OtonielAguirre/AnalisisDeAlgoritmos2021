#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void rellenaArreglo(int* );
void imprimeArreglo(int* );
void swap(int* , int* );
void bubbleSort(int* );


void main(void){
  int ingreso; 
  printf("Ingresa la cantidad de numeros que va a ordenar\n");
  scanf("&d", ingreso);
	int* vector = (int*)malloc(sizeof(int) * ingreso);
	int* aux;
	if(vector){
		aux = vector;
		rellenaArreglo(aux, ingreso);
		imprimeArreglo(aux, ingreso);
		bubbleSort(aux, ingreso);
		printf("\n -----------------------Despues de la iteracion------------------------------");
		imprimeArreglo(aux, ingreso);
	}
	else
		printf("\n Error");	
}

void rellenaArreglo(int* a, int ingreso){
	int i; 	
	srand(time(NULL));
	
	for(i = 0; i < ingreso; i++)	
		*(a++) = rand()%100;
	
}

void imprimeArreglo(int* a, int ingreso){
	int i;
	for(i = 0; i < ingreso; ++i)
		printf("\n%d", *(a++));
}

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubbleSort(int* a, int ingreso) 
{ 
	int* tmp = a+1;
	while(tmp != a + ingreso){
		if(*tmp < *(tmp-1)){
			swap(tmp,tmp-1);
			tmp = a+1;
		}
		else
			tmp++;
	}
} 
