#include <stdio.h>
#include <stdlib.h>

float Abs( float x ){
    x = ( x * x ) / -(x);
    return x;
};

int main(){
    float solucao = 0., xini = 0., xnovo = 0., Fxnovo = 0., 
          Fdxnovo = 0., E = 0.;// Fdxini = derivada de Fxini
    int k = 0;

    printf( "Digite o x inicial: " );
    scanf( "%f", &xnovo );
    printf( "Digite a precisao: " );
    scanf( "%f", &E );
    
    do{
        
       xini = xnovo;
       Fxnovo = ( xini * xini * xini ) - 9. * xini + 3.; //inserir sua função principal aqui
       Fdxnovo = 3. * ( xini * xini ) - 9.; //inserir a derivada da função principal aqui
       xnovo = xini - ( Fxnovo / Fdxnovo );
        k += 1;
        printf( "\niteracao = %d", k );
        printf( "\nxini = %f\nxnovo = %f", xini, xnovo );

    } while( Abs( xnovo - xini ) >= E || Abs( Fxnovo ) >= E );

    printf( "\n\nxnovo - xini = %f\n", xnovo - xini);
    printf( "A solucao final eh: %f\n", xnovo );
    return 0;
}
