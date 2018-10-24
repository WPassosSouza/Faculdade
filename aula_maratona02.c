#include<stdio.h>

main(){
	
	int c1, c2 , total_p1, total_p2;
	float v1,v2,total;
	
	
	
	scanf("%d %d %.2f", &c1, &total_p1, &v1);
	scanf("%d %d %.2f", &c2, &total_p2, &v2);
		
	printf("\nVALOR A PAGAR:  R$ %.2f", total=(total_p1/v1)+(total_p2/v2));
	
	
	
}
