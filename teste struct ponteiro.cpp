//#include<bits/stdcc++.h> biblioteca de outras biibliotecas // IMPORTANTE!!!
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

struct porta{
	
	int altura,largura;
		
	
}*p;


				//função
void definir(struct porta *x, float alt, float larg){
	
	x->altura=alt; // passando o parametro para altura=alt
	x->largura=larg; // passando o parametro para largura=alt
	
}


main(){
	
	using namespace std;
	
	int n;
	
	cin >> n;
	
	p=(struct porta *)malloc(n*sizeof(struct porta));// p =aloca a struct do ponteiro
													//malloc libera a o end de memoria (n=tamanho de bytes desejado) 	
	//printf("Altura");												
	//scanf("%d", &p[0].altura);
	//printf("Largura: ");
	//scanf("%d", &p[1].largura);
	

	p[0].altura=10;
	
	printf("%i", p[0]);
	
	
	free (p);
}

