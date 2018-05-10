#include <stdlib.h>
#include <stdio.h>

int main(){
int numero,vec[100],*pnumero,menor=999999;
    printf("Ingrese El tamaño Del Vector: \n");
    scanf("%d",&numero);

for(int i=0;i<numero;i++){
    printf("%d. Ingrese El Numero: ",i+1);
    scanf("%d",&vec[i]);
}
pnumero=vec;

for(int i=0;i<numero;i++){
    if(*pnumero<menor){
        menor=*pnumero;
    }
    pnumero++;
}
    printf("El menor Elemento Es: %d\n",menor); 
    printf("Posicion: %p",pnumero);
    return 0;
}
