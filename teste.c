#include<stdio.h>
#include<math.h>

int tam=4;


void leitura(float notas[tam]){

    int i,j;
    float nota, media, soma=0;


    for(i=0;i<tam;i++){

        printf("\nDigite as notas bimestrais do aluno: %i\n", i+1);

        for(i=0;i<tam;i++){

            scanf("%f", &nota);
       }

       
       

        printf("%.2f", notas[i]);

    }
}


void maior(float notas[tam]){

    int i, a=0;

    for(i=0;i<tam;i++){
        if(notas[i]>=6)
        a=a+1;
    }

    printf("\n\n%d alunos com nota maior ou igual a 6", a);
}


