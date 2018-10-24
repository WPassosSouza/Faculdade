#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>
#define tam 3
#include<conio.h>
#include<string.h>
  
   
struct FichaDeEvolucao{
	
	char fichaevolucao[];
	
	
}acessa1;

typedef struct {
	
	char inspecao[];
	char SpO2[];
	char PA[];
	char FR[];
	char FC[];
	char HS[];
	char HF[];
	char cirurgias[];
	char doencas[];
	char HPP[];
	char exames_Complementares[];
	char Tratamento_Medicamentos[];
	char HDA[];
	char QP[];
	char diagnostico_Clinico[];
	char medico_Responsavel[];
	char saneamento_Basico[];
	char exposicao_Riscos[];
	int Num_Comodos=0;
	char tipo_Moradia[];
	char cidade[];
	char endereco[];
	char grau_Escolaridade_do_Paciente[];
	char prontuario[];
	char data_Avaliacao[];
	char data_Nasc[];
	char nome[];
	int idade=0;
	char sexo[];
	char ocupacao[];
	char cor[];
	char nomeMae[];
	char nomePai[];
	int numregistro[], ComparaRegistro[];
	char data[9];
	char hora[9];
	int debug=0;
	int CEP=0;
	int qtdPaciente=0;

	
}acessa2;

acessa2 Paciente[tam];


struct Anamnese{
	
	// Variaveis Cadastro de Anamnese
	
}acessa3;

struct interrogatorio{

	// Variáveis Cadastro de interrogatorio	
	
}acessa4;
	



void EntradaDados(){
		
	
	FILE *ponteiro_para_arquivo;// ponteiro usado para arquivo txt gerado no pc
	
	ponteiro_para_arquivo = fopen("BancoFisioterapia.txt", "a"); //ponteiro recebe o parametro de abertura do arquivo com "a" leitura e escrita
	int op=0;
	
	
	
	do{						//programa ira rodar até que op='0' para sair... 
		
	//	printf("\n\t ***Fisioterapia & Aculputura***\t");printf("\n\t\tVERSÃO - BETA\n\t");
		
		printf("Programa de Interações\n");
		printf("Opções:");
		printf("\n\t(1) - Cadastrar Paciente|");
		printf("\n\t(2) - Buscar Pacientes|");
		printf("\n\t(3) - Listar Todos os Pacientes|");
		printf("\n\t(0) - Sair|");
		
		printf("\n\nDigite a Opção: ");
		scanf("%i", &op);
			
		switch(op){
			
			default: 
			printf("\n\t\t(***Opção Inválida***)\n\n");
			
			break;
			
			case 1:
			
			
				system("cls");
				printf("\nOpção Escolhida: %i", op);
				
				printf("\n\n-Entre com os Dados do Paciente-\n\n");
				int i;
				
			for(i=0;i<tam;i++){
				//printf("\n\t\tPacientes Cadastrados %i\n", i+1);
				
				printf("Nome:");
				scanf("%s", &Paciente[i].nome);
				fprintf(ponteiro_para_arquivo, "%s", Paciente[i].nome);
				fflush(stdin);
				
								
				printf("Idade:");
				scanf("%i", &Paciente[i].idade);
				fprintf(ponteiro_para_arquivo, "%i", Paciente[i].idade); 
				fflush(stdin);
				
				
				printf("Sexo:");
				scanf("%s", &Paciente[i].sexo);
				fprintf(ponteiro_para_arquivo, "%s", Paciente[i].sexo); 
				fflush(stdin);
				
		
				printf("Ocupação:");
				scanf("%s", &Paciente[i].ocupacao);
				fprintf(ponteiro_para_arquivo, "%s", Paciente[i].ocupacao); 
				fflush(stdin);
				
				
		
				printf("Cor:");
				scanf("%s", &Paciente[i].cor);
				fprintf(ponteiro_para_arquivo, "%s", Paciente[i].cor); 
				fflush(stdin);
				
				
				printf("Nome do Pai:");
				scanf("%s", &Paciente[i].nomePai);
				fprintf(ponteiro_para_arquivo, "%s", Paciente[i].nomePai); 
				fflush(stdin);
				
				
				printf("Nome da Mãe:");
				scanf("%s", &Paciente[i].nomeMae);
				fprintf(ponteiro_para_arquivo, "%s", Paciente[i].nomeMae); 
				fflush(stdin);
				
		
				printf("Registro: ");
				scanf("%i", & Paciente[i].numregistro);
				fprintf(ponteiro_para_arquivo, "%i", Paciente[i].numregistro[i]);
				fflush(stdin);
				

				//pega a data atual
				_strdate(Paciente[i].data);
				// pega a hora atual
				_strtime(Paciente[i].hora);
				
				fclose(ponteiro_para_arquivo);
			
				EntradaDados();
				i++;							
				
			}
				break;
			
			case 2:	
			
				system("cls");
			
				printf("\nOpção Escolhida: %i", op);
				
				printf("\nEntre com o Registro do Paciente: ");
				
				for(i=0;i>tam;i++){
				scanf("%d", &Paciente[i].ComparaRegistro);
				
				
				if(Paciente[i].numregistro[i]==Paciente[i].ComparaRegistro[i]){
					printf("\nPaciente Encontrado!\n");
					
			
				ponteiro_para_arquivo = fopen("BancoFisioterapia.txt", "r");
			
				printf("\nNome: %s", Paciente[i].nome);
		
				printf("\nIdade: %i", Paciente[i].idade);
				
				printf("\nSexo: %s", Paciente[i].sexo);
			
				printf("\nOcupação: %s", Paciente[i].ocupacao);
		
				printf("\nCor: %s", Paciente[i].cor);
			
				printf("\nNome do Pai: %s", Paciente[i].nomePai);
			
				printf("\nNome da Mãe: %s", Paciente[i].nomeMae);
		
				printf("\nRegistro: %i", Paciente[i].numregistro[i]);
			
				}
			}
			
				break;	
		
			case 3:		
			
			system("cls");
				printf("\nOpção Escolhida: %i\n", op);
			
			
			break;
			
			case 0:
				
			char sair='s';
				
			printf("\nDeseja sair do Programa? [S]Sim / [N]Não: ");
			scanf("%s", &sair);
			printf("\n");	
				
			if(sair =='s' || sair =='S'){
				printf("\n");
				printf("\nFinalizando Programa!!!");		
					
			}else
				
			op=1;
			
			system("cls");
			
			break;	
			
			
		}
		
		
										
	}while(op!=0);
	
		
}
	
main(){
	
	setlocale(LC_ALL,"portuguese");
		
	EntradaDados();
//	printf( "Hora: %s \n", acessa2.hora);
//	printf( "Data: %s \n", acessa2.data);
	
}
