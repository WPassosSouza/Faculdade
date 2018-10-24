#include<stdio.h>
#include<stdlib.h>

struct{
	
	int *x;
	int *y;
	

}teste;


typedef struct{
	
	 int *x;
	 int *y;
	
}teste_2;

main(){
	
	
	teste_2 a,b;
	
	scanf("%d %d", &a, &b);
		
	printf("%d \n %d", a, b);	
		
}
