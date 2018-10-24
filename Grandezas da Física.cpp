#include<stdio.h>
#include<stdlib.h>
#include<locale>

void mostrar(){
	
	printf("\n\t\t *** F�sica *** \n \t\t(2� LEI DE NEWTON)\n");
	
	printf("\n\t\tGRANDEZAS DA F�SICA\n");
	printf("\n\tComprimento -> metro  (m)");
	printf("\n\tMassa -> quilograma (kg)");
	printf("\n\tCorrente El�trica -> Ampere (A)");
	printf("\n\tTemperatura Termodin�mica -> Kelvin (K)");
	printf("\n\tQuantidade de Mat�ria -> Mol (mol)");
	printf("\n\tIntensidade Luminosa -> candela (cd)\n\n");

}

void mostrar_2(){
	
	printf("*** Tabela Para Calculo ***\n\n");
	printf("(P)= PESO ->For�a Gravitacional\n");
	printf("(NO)= NORMAL -> For�a Exercida pelo Corpo\n");
	printf("(N)= Newton");
	printf("(M)= Massa -> Massa do Corpo\n");
	printf("(A)= Acelera��o -> do Corpo\n");
	printf("(V)= Velocidade -> do Corpo\n");
	printf("(T)= Tempo\n");
	printf("(Fr)= For�a Resultante -> Causa");
	
}


void calc(){
	
	int num;
	float p,Fr,a,s1,s2,t1,t2,vm;
	
	
	printf("\n\nAperte [1] para Calcular Acelera��o ");
	printf("\nAperte [2] para Calcular (MRU) - Movimento  Retil�neo Uniforme");
	printf("\nAperte [0] para Sair");
	
	printf("\n\nQual Calculo fazer ?: ");
	scanf("%d", &num);
	
	
while(num!=0){

	if(num==1){
			
	printf("\n------------------------------------");
	printf("\n\n\t *** LEI DE FORMA��O ***\n\n");
	printf("\t\t(NO+P)=> Fr=M*A");
	printf("\n------------------------------------\n");
	
			
		printf("\n\nEntre com o peso do Corpo - (Kg ou g): ");
		scanf("%f", &p);
	
		printf("\nEntre com com a for�a exercida contra o corpo - (em NEWTON): ");
		scanf("%f", &Fr);
	
		a=Fr/p;
	
		printf("\n\nA Acelera��o do Corpo � de: %.1f  m/s�", a);
		

	}
		else
		
		if(num==2){

			
		printf("\n\n\t\tCalculo (MRU)\n\n\tMovimento Retil�nio Uniforme");
		printf("\n\n*** Para Obter a Velocidade M�dia ***\n");
		printf("\n\tLEI DE FORMA��O:\t\t\nVm=(delta s2 - delta s1)/(tempo 2 - tempo 1)\n\n");
	
	
		printf("\n*** Dist�ncias - S(metros) ***\n\n");
			
	 	printf("\nDigite DELTA(S1): ");
	 	scanf("%f", &s1);
	 	
	 	printf("\nDigite DELTA(S2): ");
	 	scanf("%f", &s2);
	 	
	 	printf("\n\n *** Tempo - T(segundos)***\n\n");
			
		printf("\n\nDigite o Tempo T1: ");
		scanf("%f", &t1);
		
		printf("\nDigite o Tempo T2: ");
		scanf("%f", &t2);
	
	 	
	 	printf("\nA Velocidade M�dia � (Vm): %.4f m/s", vm=(s2-s1)/(t2-t1));
		

		
		}
	}
}




main(){

	setlocale(LC_ALL, "portuguese");

	mostrar();
	mostrar_2();
	
	calc();

}
