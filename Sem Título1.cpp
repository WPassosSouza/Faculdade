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
		
		printf("Digite a equa��o que deseja resolver : ");
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
				printf("Opera��o matem�tica inv�lida!\n");
			}
		}
		printf("X=%f",final);
	}
	
	void eqSegundo (){
		float a,b,c;
		char sinal1,sinal2;
		float x1,x2;
		float delta,x;
		
		printf("Digite a equa��o que deseja resolver : ");
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
			printf("N�o existe raiz real.");
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
		
		printf("***Bem vindo ao programa que resolve equa��es***\n");
		printf("---Esse programa resolve equa��es de primeiro e segundo grau---\n\n");
		printf("Voc� deseja resolver alguma equa��o? ");
		gets(interacao);
		interacao[0] = toupper (interacao[0]);
		if(interacao[0] == 'S'){
			while (i == 0){
				system("cls");
				printf("Se sua equa��o � de primeiro grau, digite 1.\nSe sua equa��o � de segundo grau, digite 2.\nSe quiser sair, digite cancelar.\nQual a��o deve ser realizada? ");
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
					printf("Deseja fazer outra equa��o? ");
					fflush(stdin);
					scanf("%c",&interacao2);
					interacao2[0] = toupper (interacao2[0]);
					
					if(interacao2[0] == 'N')
						i = 1;
				}
			}
			printf("\n\n");
			printf("                               PRAISE THE SUN!\n");
			printf("		 �������������������������������������������������\n");
			printf("		����W����������������������������������������W.���\n");
			printf("		�����. ������������������������������������M .����\n");
			printf("		����� 5 �����������������������������������.*.����\n");
			printf("		�����M..@�����������M��������������������� M M����\n");
			printf("		������#    ���������� J�����������������    %�����\n");
			printf("		�������     ����������.���������������M     ������\n");
			printf("		�������   � .����������.    ���������M M   �������\n");
			printf("		��������� ���.W�������   3. ��������.(��M ��������\n");
			printf("		���������� ���. M����M W .� @����M. ��M� ���������\n");
			printf("		����������� ���M ����%       ����.����.�����������\n");
			printf("		������������.����7.��        ���Ю��� ������������\n");
			printf("		������������M ����� �( .   .�� ����� �������������\n");
			printf("		�������������� ����    ���%    ���� M�������������\n");
			printf("		��������������� ��. W   �5  @W .�� ���������������\n");
			printf("		����������������..   W��.JM��   * ����������������\n");
			printf("		����������������     .     .  .  �����������������\n");
			printf("		����������������@  7�M     �     �����������������\n");
			printf("		�����������������   . ��  M�     �����������������\n");
			printf("		�����������������   MA  �   �   (�����������������\n");
			printf("		�����������������  A    �       .�����������������\n");
			printf("		����������������        M        ����������������\n\n");
			printf("Obrigado por utilizar o nosso software!\nVoc� foi desconectado...\n");
			system("pause");
		}
		else{
			
			printf("                                PRAISE THE SUN!\n");
			printf("		 �������������������������������������������������\n");
			printf("		����W����������������������������������������W.���\n");
			printf("		�����. ������������������������������������M .����\n");
			printf("		����� 5 �����������������������������������.*.����\n");
			printf("		�����M..@�����������M��������������������� M M����\n");
			printf("		������#    ���������� J�����������������    %�����\n");
			printf("		�������     ����������.���������������M     ������\n");
			printf("		�������   � .����������.    ���������M M   �������\n");
			printf("		��������� ���.W�������   3. ��������.(��M ��������\n");
			printf("		���������� ���. M����M W .� @����M. ��M� ���������\n");
			printf("		����������� ���M ����%       ����.����.�����������\n");
			printf("		������������.����7.��        ���Ю��� ������������\n");
			printf("		������������M ����� �( .   .�� ����� �������������\n");
			printf("		�������������� ����    ���%    ���� M�������������\n");
			printf("		��������������� ��. W   �5  @W .�� ���������������\n");
			printf("		����������������..   W��.JM��   * ����������������\n");
			printf("		����������������     .     .  .  �����������������\n");
			printf("		����������������@  7�M     �     �����������������\n");
			printf("		�����������������   . ��  M�     �����������������\n");
			printf("		�����������������   MA  �   �   (�����������������\n");
			printf("		�����������������  A    �       .�����������������\n");
			printf("		����������������        M        ����������������\n\n");
			printf("Obrigado por utilizar o nosso software!\nVoc� foi desconectado...\n");
			system("pause");
		}
	}	
