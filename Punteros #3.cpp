#include <stdlib.h>
#include <stdio.h>


int main(){

int numeros[10],*pnumeros;

for(int i=0;i<10;i++){
   printf("%d. Ingrese Un Numero:\n ",i+1);
   scanf("%d",&numeros[i]);
}
   pnumeros=numeros; 
   //Posicion De Memoria Comienza Numeros

for(int i=0;i<10;i++){
	
    if(*pnumeros%2==0){
    printf("El Numero %d Es Par\n",*pnumeros);
    printf("Posicion: %p\n",pnumeros);
    }
    pnumeros++;
}
   return 0;
}

