#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct  {
       char IP[16];
       char URL[40];
} registro_dns;

registro_dns base_dns[50];

int entradas_dns;

void inicializar_base_dns() {   
     
     strcpy(base_dns[0].IP,"10.10.10.10");
     strcpy(base_dns[0].URL,"www.globo.com");

     strcpy(base_dns[1].IP,"110.110.110.110");
     strcpy(base_dns[1].URL,"www.feso.br");

     strcpy(base_dns[2].IP,"220.220.220.220");
     strcpy(base_dns[2].URL,"www.teste.com.br");
     
     strcpy(base_dns[3].IP,"230.230.230.230");
     strcpy(base_dns[3].URL,"www.amables.com");
     
     entradas_dns = 5;
     
}

main(){
	
	int i=0;
	
char ip[50];
	
	
	printf("Entre com o IP:");
	scanf("%s", &ip);
	
	inicializar_base_dns();
	

	

	if(bool r1=strcmp(base_dns[1].IP, ip) == true){// compara string baseDns com ip strcmp (vetor[i], ip)
	  		
		  printf("SITE: %s - %d ", base_dns[0].URL, r1);	
	}else
		if(bool r2=strcmp(base_dns[2].IP, ip) == true){
			
			printf("SITE: %s - %d ", base_dns[1].URL, r2);
		}else
			if(bool r3=strcmp(base_dns[3].IP, ip) == true){
				
				printf("SITE: %s - %d ", base_dns[2].URL, r3);
			}else
				if(bool r4=strcmp(base_dns[4].IP, ip) == true){
				
					printf("SITE: %s - %d ", base_dns[3].URL, r4);
				}else
				
			printf("ERRO!!! - 0.0.0.0 ");
	
}
	


