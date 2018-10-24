#include<stdio.h>

int fat(int n){
	
	if(n==0)
		return 1;
	else
	
	return n*fat(n-1);	
	
	
}

main(){
	
	
	int num;
	
	printf("ENTRE COM UM NUMERO: ");
	scanf("%d", num);
	
	fat(num);
	
	
}
