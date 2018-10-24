#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


main(){
	
    int i;

 	unsigned int RAND=50*(pow(RAND,1)); 
    
	srand((unsigned)time(NULL));

 
    for(i=1 ; i <= 10 ; i++) 
    
        printf("Numero %d: %d\n",i, rand()%RAND*(-1));
 
}


