#include <stdio.h>
#include <stdlib.h>

int const MAXTAM = 10;
int pilha[MAXTAM];
int topo;

void pilha_construir (){

topo = -1;

}

bool pilha_vazia(){

    if(topo==-1){

        return true;

    }
    else {

        return false;
    }

}

bool pilha_cheia(){
    if(topo==MAXTAM-1){

        return true;

    }
    else {

        return false;

    }
}

bool pilha_push(int valor){
	
	if(pilha_cheia()){
    printf("STACK OVERFLOW");
        return false;

	}

else {
	topo++;
	pilha[topo] = valor;

}

}

bool pilha_pop(int &valor){
if(pilha_vazia()){

    return false;

}
else {


    valor=pilha[topo];
    topo--;
    return true;
}


}

bool pilha_consulta(int &valor){

if(pilha_vazia()){

    return false;

}
else {

    valor=pilha[topo];
    return true;
}


}

int main()
{   int dig,valor;
    pilha_construir();
    do{
    printf("\n\n\t--- Digite o numero desejado --- \n	");
    printf("\n1 Gravar numero na pilha :");
    printf("\n2 Excluir numero na pilha :");
    printf("\n3 Consultar numero na pilha :");
    printf("\n4 Sair :");
    scanf("%d",&dig);

    switch(dig){

    case 1:
        printf("Digite o numero que deseja entrar : ");
        pilha_push(scanf("%d", &valor));
        break;
    case 2:

        break;
    case 3:

        break;
    case 4:

        break;

    default :

        break;
    }

    }while(dig!=4);
    printf("Hello world!\n");
    return 0;
}
