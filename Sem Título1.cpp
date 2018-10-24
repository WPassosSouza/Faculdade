#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

float diferenteDeZero(float a,char sinal, float b, int igual, int di){
	float eq,div;
	
	div=a+b;
	eq= di/div;
	
	printf("%f",eq);
	
}
	
	float eqPrimeiro (){
		float a = 0;
		float b=0;
		float final;
		char sinal,igual;
		int di;
		setlocale (LC_ALL,"Portuguese");
		
		printf("Digite a equaчуo que deseja resolver : ");
		scanf("%fx%c%f%d%%d",&a,&sinal,&b,&igual,&di);
		
		if(di!=0){
			
			diferenteDeZero(a,sinal,b,igual,di);
		}
		
		
		if(sinal == '+'){
			final = -b/a;
		}
		else{
			if(sinal == '-'){
				final = b/a;
			}
			else{
				printf("Operaчуo matemсtica invсlida!\n");
			}
		}
		printf("X=%f",final);
	}
	
	void eqSegundo (){
		float a,b,c;
		char sinal1,sinal2;
		float x1,x2;
		float delta,x;
		
		printf("Digite a equaчуo que deseja resolver : ");
		scanf("%fx2%c%fx%c%f",&a,&sinal1,&b,&sinal2,&c);
		
		if( sinal1 == '-'){
			b = -b;
		}
		if( sinal2 == '-'){
			c = -c;
		}
		delta = (-b*-b)-4*a*c;
		printf("Delta = %.1f\n",delta);
		if( delta < 0){
			printf("Nуo existe raiz real.");
		}
		if(delta >= 0){
		x1 = (-b + sqrt(delta))/2*a;
		x2 = (-b - sqrt(delta))/2*a;		
		}
		printf("X1 = %.1f\nX2 = %.1f\n",x1,x2);
	}
	
	int main (){
		float a,b,c;
		char sinal1,sinal2;
		int grau,i = 0,bug = -1;
		char interacao[3],interacao2[20];
		
		setlocale (LC_ALL,"Portuguese");
		
		printf("***Bem vindo ao programa que resolve equaчїes***\n");
		printf("---Esse programa resolve equaчїes de primeiro e segundo grau---\n\n");
		printf("Vocъ deseja resolver alguma equaчуo? ");
		gets(interacao);
		interacao[0] = toupper (interacao[0]);
		if(interacao[0] == 'S'){
			while (i == 0){
				system("cls");
				printf("Se sua equaчуo щ de primeiro grau, digite 1.\nSe sua equaчуo щ de segundo grau, digite 2.\nSe quiser sair, digite cancelar.\nQual aчуo deve ser realizada? ");
				fflush(stdin);
				scanf("%c",&interacao2);
				interacao2[0] = toupper (interacao2[0]);
				
				if(interacao2[0] == '1'){
					eqPrimeiro();
				}
				
				if(interacao2[0] == '2'){
					eqSegundo();
				}
			
				if(interacao2[0] == 'C')
					i = 1;
				else {
					printf("Deseja fazer outra equaчуo? ");
					fflush(stdin);
					scanf("%c",&interacao2);
					interacao2[0] = toupper (interacao2[0]);
					
					if(interacao2[0] == 'N')
						i = 1;
				}
			}
			printf("\n\n");
			printf("                               PRAISE THE SUN!\n");
			printf("		 ооооооооооооооооооооооооооооооооооооооооооооооооо\n");
			printf("		ооооWооооооооооооооооооооооооооооооооооооооооW.ооо\n");
			printf("		ооооо. ооооооооооооооооооооооооооооооооооооM .оооо\n");
			printf("		ооооо 5 ооооооооооооооооооооооооооооооооооо.*.оооо\n");
			printf("		оооооM..@оооооооооооMооооооооооооооооооооС M Mоооо\n");
			printf("		оооооо#    оооооооооо Jооооооооооооооооо    %ооооо\n");
			printf("		ооооооо     оооооооооо.оооооооооооооооM     оооооо\n");
			printf("		ооооооо   С .оооооооооо.    оооооооооM M   ооооооо\n");
			printf("		оооооооо╨ ооо.Wооооооо   3. оооооооо.(ооM оооооооо\n");
			printf("		оооооооооС ооо. MооооM W .С @ооооM. ооM╨ ооооооооо\n");
			printf("		ооооооооооо оооM оооо%       оооо.оооо.ооооооооооо\n");
			printf("		оооооооооооо.оооо7.оо        ооС╨оооо оооооооооооо\n");
			printf("		ооооооооооооM ооооо о( .   .оо ооооо ооооооооооооо\n");
			printf("		оооооооооооооо оооо    ооо%    оооо Mооооооооооооо\n");
			printf("		ооооооооооооооо оо. W   о5  @W .оо ооооооооооооооо\n");
			printf("		оооооооооооооооо..   Wож.JMоС   * оооооооооооооооо\n");
			printf("		оооооооооооооооо     .     .  .  ооооооооооооооооо\n");
			printf("		оооооооооооооооо@  7оM     о     ооооооооооооооооо\n");
			printf("		ооооооооооооооооо   . оС  Mо     ооооооооооооооооо\n");
			printf("		ооооооооооооооооо   MA  о   о   (ооооооооооооооооо\n");
			printf("		ооооооооооооооооо  A    о       .ооооооооооооооооо\n");
			printf("		оооооооооооооооо        M        оооооооооооооооо\n\n");
			printf("Obrigado por utilizar o nosso software!\nVocъ foi desconectado...\n");
			system("pause");
		}
		else{
			
			printf("                                PRAISE THE SUN!\n");
			printf("		 ооооооооооооооооооооооооооооооооооооооооооооооооо\n");
			printf("		ооооWооооооооооооооооооооооооооооооооооооооооW.ооо\n");
			printf("		ооооо. ооооооооооооооооооооооооооооооооооооM .оооо\n");
			printf("		ооооо 5 ооооооооооооооооооооооооооооооооооо.*.оооо\n");
			printf("		оооооM..@оооооооооооMооооооооооооооооооооС M Mоооо\n");
			printf("		оооооо#    оооооооооо Jооооооооооооооооо    %ооооо\n");
			printf("		ооооооо     оооооооооо.оооооооооооооооM     оооооо\n");
			printf("		ооооооо   С .оооооооооо.    оооооооооM M   ооооооо\n");
			printf("		оооооооо╨ ооо.Wооооооо   3. оооооооо.(ооM оооооооо\n");
			printf("		оооооооооС ооо. MооооM W .С @ооооM. ооM╨ ооооооооо\n");
			printf("		ооооооооооо оооM оооо%       оооо.оооо.ооооооооооо\n");
			printf("		оооооооооооо.оооо7.оо        ооС╨оооо оооооооооооо\n");
			printf("		ооооооооооооM ооооо о( .   .оо ооооо ооооооооооооо\n");
			printf("		оооооооооооооо оооо    ооо%    оооо Mооооооооооооо\n");
			printf("		ооооооооооооооо оо. W   о5  @W .оо ооооооооооооооо\n");
			printf("		оооооооооооооооо..   Wож.JMоС   * оооооооооооооооо\n");
			printf("		оооооооооооооооо     .     .  .  ооооооооооооооооо\n");
			printf("		оооооооооооооооо@  7оM     о     ооооооооооооооооо\n");
			printf("		ооооооооооооооооо   . оС  Mо     ооооооооооооооооо\n");
			printf("		ооооооооооооооооо   MA  о   о   (ооооооооооооооооо\n");
			printf("		ооооооооооооооооо  A    о       .ооооооооооооооооо\n");
			printf("		оооооооооооооооо        M        оооооооооооооооо\n\n");
			printf("Obrigado por utilizar o nosso software!\nVocъ foi desconectado...\n");
			system("pause");
		}
	}	
