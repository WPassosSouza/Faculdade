#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main () {
    int opcao;
    int n;
    float esp,areaTotal,a,b,n2,i,auxA,h = 0,me;
    float aux;
    setlocale(LC_ALL, "Portuguese");
    printf("\t\tCálculo de Áreas\n");
    printf("\tDigite 1 para Método do Trapézio\n\tDigite 2 para Método de Simpson\n");

    scanf("%d",&opcao);

    switch(opcao){

        case 1 :

            printf("Digite o número de vezes que quer dividir o trapézio : ");
            scanf("%f",&n2);

            printf("Digite o A : ");
            scanf("%f",&a);

            printf("Digite o B : ");
            scanf("%f",&b);

            esp = (b-a)/n2;
            printf("%f\n",esp);

            areaTotal = sqrt(1 + pow(a,2)); // Calcula o f(x0)!

            auxA = a;

            for (i  = 0; i < n2-1; i++){  // Calcula f(x2) ... f(x3)...
                auxA = auxA + esp;
                areaTotal = areaTotal + (2*sqrt(1 + pow(auxA,2)));
            }

            auxA = b;
            areaTotal = areaTotal + sqrt(1 + pow(b,2));

            areaTotal = ((b-a)/(2*n2)) * areaTotal ;

            printf("O valor da área é : %.5f\n",areaTotal);
          break;

        case 2 :
            printf("Digite o número de vezes que quer dividir : ");
            scanf("%d",&n);

            printf("Digite o A : ");
            scanf("%f",&a);

            printf("Digite o B : ");
            scanf("%f",&b);

            h = (b-a) /(2*n);
            printf("%.5f\n", h);

            areaTotal = sqrt(1 + pow(a,2)); // Calcula o f(x0)!
            auxA = a;

            for (i  = 0; i < n-1 ; i++){  // Calcula f(x2) ... f(x3)...
                auxA = auxA + h;

                areaTotal = areaTotal + (2*sqrt(1 + pow(auxA,2)));

                auxA = auxA + h;

                areaTotal = areaTotal + (4*sqrt(1 + pow(auxA,2)));
            }


            auxA = b;
            areaTotal = areaTotal + sqrt(1 + pow(auxA,2));

            areaTotal = (h/3)* areaTotal;
            printf("O valor da área é : %.5f\n",areaTotal);
          break;
        }
}
