#include <stdio.h>
#include <stdlib.h>
#define TAM 10
 
struct Program {
    float M[TAM][TAM], c, x[10], soma;
    int n;
};
 
 
void ler (struct Program *matriz){
    int i, j;
    for(i=0; i<matriz->n; i++)
        for(j=0; j<matriz->n+1; j++){
            printf ("A[%d][%d] : ", i+1, j+1);
            scanf("%f", &matriz->M[i][j]);
        }
}
// ZERAR TERMOS COMO GAUSS
void zerar (struct Program *matriz){
    int i, j, k;
    float c;
     
    for (j=0; j<matriz->n; j++){
        for (i=0; i<matriz->n; i++){
            if (i>j){
                c=-(matriz->M[i][j]/matriz->M[j][j]);
                for (k=0; k<matriz->n+1; k++){
                    matriz->M[i][k] = c * matriz->M[j][k] + matriz->M[i][k];
                }
            }
        }
    }
    for (i=0; i<matriz->n; i++){
        for (j=0; j<matriz->n+1; j++){
            if (j!= matriz->n){
                printf ("%0.2f ", matriz->M[i][j]);
            }
            else
                printf ("%0.2f \n", matriz->M[i][j]);
        }
    }
 }
  
// ENCONTRAR TERMOS X, Y, Z,...
void EncontrarTermos (struct Program *matriz){
    int i, j;
    int n = matriz->n-1;
    matriz->x[n]=matriz->M[n][n+1]/matriz->M[n][n];
     
     
    for(i=n-1; i>=0; i--)
    {
        matriz->soma=0;
        for(j=i+1; j<=n; j++)
        {
            matriz->soma=(matriz->soma)+(matriz->M[i][j]*matriz->x[j]);
        }
        matriz->x[i]=(matriz->M[i][n+1]-matriz->soma)/matriz->M[i][i];
             
        }
    }
 
// Mostra SPD, SPI ou SI;
void MostrarTermos (struct Program *matriz){
    int i, j;
    int n = matriz->n-1;
    printf ("\nA solucao: \n");
     
    int Ax = (int)(matriz->M[n][n]);
    int Bx = (int)(matriz->M[n][n+1]);
     
    if (Ax == 0 && Bx == 0){
        printf ("Sistema possivel e indeterminado !!");
         
    }
    else {
        if (Ax == 0.0 && Bx != 0){
        printf ("Sistema Impossivel!!");
        }
        else if (Ax != 0){
            printf ("\nSistema possivel e determinado!!\n");
            for (i=0; i<=matriz->n-1; i++){
                 
                printf ("\nx%d = %.2f\t", i+1, matriz->x[i]);
             }
        }
    }
}
 
 
 
main(){
    struct Program matriz;
    int soun = 0;
    do{
        printf("Numero de elementos: ");
        scanf("%d", &matriz.n);
 
        ler (&matriz);
        zerar (&matriz);
        EncontrarTermos (&matriz);
         
        MostrarTermos (&matriz);
             
        printf ("\n\n[1] Resolver outro sistema\n[2] Sair\n");
        scanf ("%d", &soun);
        system("cls");
    }while (soun == 1);
}
