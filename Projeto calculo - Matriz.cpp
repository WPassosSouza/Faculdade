#include <stdio.h>
#include <stdlib.h>

int main()
{


   int i,j,k,n;
   float A[20][20],c,x[10],soma=0.0;
   printf("Digite o tamanho da matriz : ");
   scanf("%d",&n);
   printf("\n");
   for(i=1;i<=n;i++){

    for(j=1;j<=(n+1);j++){
        if(j==n+1){

        printf("isso é igual = ");
        scanf("%f",&A[i][j]);

        }
        else {
        printf("A[%d][%d] :",i,j);
        scanf("%f",&A[i][j]);
        }
    }
    }
    for(j=1;j<=n;j++) {
        for(i=1; i<=n;i++){

            if(i>j){

                c=-(A[i][j]/A[j][j]);
                for(k=1;k<=n+1;k++){

                    A[i][k]=c*A[j][k]+A[i][k];

            }
            }

        }

    }

    for(i=1;i<=n;i++){

        for(j=1;j<=n+1;j++){

            if(j!=n+1){

                printf("%0.2f  ",A[i][j]);
            }

            else {

                printf("%0.2f \n",A[i][j]);
            }

        }

    }

x[n]=A[n][n+1]/A[n][n];

    for(i=n-1; i>=1;i--){

        soma=0;

        for(j=i+1; j<=n; j++){

            soma=soma+A[i][j]*x[j];
        }
        x[i]=(A[i][n+1]-soma)/A[i][i];
    }

    printf("\nA solução e : \n");

    for(i=1; i<=n;i++){

        printf("\nx%d=%.2f\t",i,x[i]);
    }

}
