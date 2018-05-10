#include <stdlib.h>
#include <stdio.h>

void pedirdatos();
void buscar(int *pnum,int num);

int num,vec[100],*pnum=vec;
int dato,i=0;
char band='F';

int main(){

pedirdatos();
buscar(pnum,num);

    return 0;
}
void pedirdatos(){
   printf("Digite El Numero Del Arreglo: ");
   scanf("%d",&num);

for(int i=0;i<num;i++){
   printf("%d. Digite Un Numero: ",i+1);
   scanf("%d",&*(pnum+i));
}
}
void buscar(int *pnum,int num){
   printf("Digite El Numero Que Desea Buscar: ");
   scanf("%d",&dato);
   
   while((band=='F')&&(i<num)){  //Busqueda Secuelcial
        if(*(pnum+i)==dato){
        band='V';
    }
i++;
    }
if(band=='F'){
    printf("*****************************************\n");
    printf("El Numero %d No Ha Sido Encontrado\n",dato);
    printf("*****************************************\n");
}else{
    printf("*****************************************\n");
    printf("El Numero %d Ha Sido Encotrado En La Posicion %d\n",dato,i);
    printf("*****************************************\n");

}
}


