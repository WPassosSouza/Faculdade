#include<stdio.h>
#include<stdlib.h>
#include<locale>

void mostrar(){
	
	printf("\n\t\t *** Física *** \n \t\t(2º LEI DE NEWTON)\n");
	
	printf("\n\t\tGRANDEZAS DA FÍSICA\n");
	printf("\n\tComprimento -> metro  (m)");
	printf("\n\tMassa -> quilograma (kg)");
	printf("\n\tCorrente Elétrica -> Ampere (A)");
	printf("\n\tTemperatura Termodinâmica -> Kelvin (K)");
	printf("\n\tQuantidade de Matéria -> Mol (mol)");
	printf("\n\tIntensidade Luminosa -> candela (cd)\n\n");

}

void mostrar_2(){
	
	printf("*** Tabela Para Calculo ***\n\n");
	printf("(P)= PESO ->Força Gravitacional\n");
	printf("(NO)= NORMAL -> Força Exercida pelo Corpo\n");
	printf("(N)= Newton");
	printf("(M)= Massa -> Massa do Corpo\n");
	printf("(A)= Aceleração -> do Corpo\n");
	printf("(V)= Velocidade -> do Corpo\n");
	printf("(T)= Tempo\n");
	printf("(Fr)= Força Resultante -> Causa");
	
}


void calc(){
	
	int num;
	float p,Fr,a,s1,s2,t1,t2,vm;
	
	
	printf("\n\nAperte [1] para Calcular Aceleração ");
	printf("\nAperte [2] para Calcular (MRU) - Movimento  Retilíneo Uniforme");
	printf("\nAperte [0] para Sair");
	
	printf("\n\nQual Calculo fazer ?: ");
	scanf("%d", &num);
	
	
while(num!=0){

	if(num==1){
			
	printf("\n------------------------------------");
	printf("\n\n\t *** LEI DE FORMAÇÃO ***\n\n");
	printf("\t\t(NO+P)=> Fr=M*A");
	printf("\n------------------------------------\n");
	
			
		printf("\n\nEntre com o peso do Corpo - (Kg ou g): ");
		scanf("%f", &p);
	
		printf("\nEntre com com a força exercida contra o corpo - (em NEWTON): ");
		scanf("%f", &Fr);
	
		a=Fr/p;
	
		printf("\n\nA Aceleração do Corpo é de: %.1f  m/s²", a);
		

	}
		else
		
		if(num==2){

			
		printf("\n\n\t\tCalculo (MRU)\n\n\tMovimento Retilínio Uniforme");
		printf("\n\n*** Para Obter a Velocidade Média ***\n");
		printf("\n\tLEI DE FORMAÇÃO:\t\t\nVm=(delta s2 - delta s1)/(tempo 2 - tempo 1)\n\n");
	
	
		printf("\n*** Distâncias - S(metros) ***\n\n");
			
	 	printf("\nDigite DELTA(S1): ");
	 	scanf("%f", &s1);
	 	
	 	printf("\nDigite DELTA(S2): ");
	 	scanf("%f", &s2);
	 	
	 	printf("\n\n *** Tempo - T(segundos)***\n\n");
			
		printf("\n\nDigite o Tempo T1: ");
		scanf("%f", &t1);
		
		printf("\nDigite o Tempo T2: ");
		scanf("%f", &t2);
	
	 	
	 	printf("\nA Velocidade Média é (Vm): %.4f m/s", vm=(s2-s1)/(t2-t1));
		

		
		}
	}
}




main(){

	setlocale(LC_ALL, "portuguese");

	mostrar();
	mostrar_2();
	
	calc();

}
