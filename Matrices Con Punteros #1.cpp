#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    
    int matriz[3], matrizz[3], matrizzz[3]; //Creamos 2 matrices de 3x3 Para Calcular Su Suma
    int *Pmatriz = matriz, *Pmatrizz = matrizz, *Pmatrizzz = matrizzz;
  
    for(i=0; i<3; i++){ //Llenamos El Vector 1
        printf("Digite Un Numero: ");
        scanf("%d",&*(Pmatriz+i));
        printf("Digite Un Numero: ");
         scanf("%d",&*(Pmatrizz+i));
        printf("Digite Un Numero: ");
         scanf("%d",&*(Pmatrizzz+i));
    }

    
    printf("Mostrando Matriz \n"); //Mostramos La Matriz Sumada
    for(i=0; i<3; i++){
        printf("%d \t", *(Pmatriz+i));
        printf("%d \t", *(Pmatrizz+i));
        printf("%d \t", *(Pmatrizzz+i));
        printf("\n");
    }


int resultado1=0,resultado2,resultado3;
           for(i=0; i<3; i++){ //Sumando Las Matrices
       resultado1+=*(Pmatriz+i)+*(Pmatrizz+i)+*(Pmatrizzz+i);
        }

        printf("La Suma De Todas La Posiciones es: %d\n", resultado1);

    system("pause");
    return 0;
}
