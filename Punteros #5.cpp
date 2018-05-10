#include <stdio.h>
#include <stdlib.h>

void Pedirdatos();
void ordenarnumeros(int *pnum,int num);
void imprimir(int *pnum,int num);

int vec[100];
int num,*pnum;
int aux;
int *pnum=vec;
int main(){

Pedirdatos();
ordenarnumeros(pnum,num);
imprimir(pnum,num);


    return 0;
}
void Pedirdatos(){
printf("ingrese El Numero Del Arreglo: \n ");
scanf("%d",&num);

for(int i=0;i<num;i++){
    printf("%d. Ingrese Un Numero: \n ",i+1);
    scanf("%d",&*(pnum+i));
}
}

void ordenarnumeros(int *pnum,int num){ //Ordenar Con El Metodo Burbuja

for(int i=0;i<num;i++){
	for(int j=0;j<num-1;j++){
            if(*(pnum+j)>*(pnum+j+1)){
            aux=*(pnum+j);
            *(pnum+j)=*(pnum+j+1);
            *(pnum+j+1)=aux;
        }
    }
}
}

void imprimir(int *pnum,int num){
printf("Arreglo Ordenado\n");


for(int i=0;i<num;i++){
    printf("%d \n",*(pnum+i));

}

}




