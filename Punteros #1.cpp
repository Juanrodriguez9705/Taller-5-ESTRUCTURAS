#include <stdlib.h>
#include <stdio.h>

int main(){
int num,*dnum;
printf("Ingrese Un Numero:\n ");
scanf("%d",&num);
 dnum=&num;
if(*dnum%2==0){
    printf("El Numero %d Es Par\n",*dnum);
    printf("Posicion: %p",dnum);
}else{
printf("El Numero %d Es Impar\n",*dnum);
printf("Posicion: %p",dnum);

}

    return 0;
}
