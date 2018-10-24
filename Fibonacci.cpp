/*
//potencia com numeros gerados pelo 'for'
#include<stdio.h>
#define tam 5
main(){
	int i=0, cont=0;
	for(i=0;i<=tam;i++){
		cont=i*i;
		printf("\n%d\n", cont++);	
	}
}
*/

//sequencia de Fibonacci
#include<stdio.h>
#define numeros 20
main(){
	int i=0, aux=0;
	int a=0,b=1;
	
	for(i=1;i<numeros;i++){	
		aux=a+b;
		a=b;
		b=aux;	
		printf("\n%d\n", aux);	
	}
	
}
