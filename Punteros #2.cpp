#include <stdlib.h>
#include <stdio.h>

bool esprimo(int n);
int main(){
    int num,*pnum;
    
    printf("Ingrese Un Numero:\n ");
        scanf("%d",&num);
         pnum=&num;
      
    if(esprimo(num)){
        printf("Es Primo\n");
        printf("Posicion: %p",pnum);
    }else{
        printf("No Es Primo\n");
        printf("Posicion: %p",pnum);
    }
    return 0;
}
bool esprimo(int n){

int i,primos=0;

for(i=1;i<=n;i++){
    if(n%i==0){
        primos++;
    }
}
if(primos==2){
    return true;
}else{
    return false;
}
}
