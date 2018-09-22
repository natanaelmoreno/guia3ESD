#include<stdio.h>

int main(){


int x, auxiliar;
int *p1, *p2;
//creamos nuestros arraya
int vec1[10]={11,22,33,44,55,111,222,333,444,555};
int vec2[10]={66,77,88,99,110,666,777,888,999,1110};


p1=&vec1[10];
p2=&vec2[10];

//intercambiamos la posicion de los punteros
for(x=0;x<10;x++){

auxiliar=*p1 ; 
*p1=*p2;
*p2=auxiliar;

}

//mostramos los vectores 
for(x=0;x<10;x++){
	printf("\n el vector 1 es %d",vec2[x]);
	
	}
	
for(x=0;x<10;x++){
	printf("\n el vector 2 es %d",vec1[x]);
	
	}

}
