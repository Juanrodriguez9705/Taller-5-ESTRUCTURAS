#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
int i, j=0, contador=0, numero; //Matriz Que Se Llena Con El Sistema Con Numero Primos
    int vector1[3], vector2[3], vector3[3];
    int *Pvector1 = vector1, *Pvector2 = vector2, *Pvector3 = vector3;
        srand(time(0));
    while(j!=3){
        numero = rand () % 30;
        for(i=1; i<=numero; i++){
            if(numero%i==0){
                contador++;
        }
        }
        if(contador==2){
                *(Pvector1+j) = numero;
                *(Pvector2+j) = numero;
                *(Pvector3+j) = numero;
                j++;
        }
            contador=0;
        }
        printf("Mostrando matriz: \n"); //Mostramos La Matriz
        for(i=0; i<3; i++){
            printf("%d \t", *(Pvector1+i));
            printf("%d \t", *(Pvector2+i));
            printf("%d \t", *(Pvector3+i));
            printf("\n");
        }
    return 0;
}
