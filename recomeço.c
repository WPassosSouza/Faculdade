/*

#include<stdio.h>

int tam=4;


void mostrar(float notas[4]){

    int i;
    float nota, media, soma=0;


    for(i=0;i<tam;i++){

        printf("Digite as Notas dos alunos: %d: ", i+1);

        for(i=0;i<tam;i++){

            scanf("\n%f", &nota);

            soma+=nota;

        }

        notas[i]=soma/4;

        printf("%.2f", notas[i]);
    }
}

void maior(float n[tam]){

    int i,a;

    for(i=0;i<tam;i++){

        if(n[i]>=6)
            a=a+1;

    }

    printf("\n\n %.2f aluno com a nota maior ou igual a 6", a);

		if(a>=6 ){
   	    
    		printf("\nAprovado!");
		}
    	else
    {
    
    	printf("\nReprovado!");
	}
}

main(){

    float notas[4],n[4];
    
    mostrar(notas);
    maior(n);
    
}


*/

#include<stdio.h>
#include<stdlib.h>



int main()
{
    printf("O tamanho do inteiro em meu computador: %d bytes", sizeof(double));
    
    
}
