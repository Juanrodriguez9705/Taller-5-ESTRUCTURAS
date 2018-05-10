#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main()
{
    int i;
    
    int matriz[3], matrizz[3], matrizzz[3]; //Creamos La Matriz
    int *Pmatriz = matriz, *Pmatrizz = matrizz, *Pmatrizzz = matrizzz;

    
      printf("Creando Matriz De 3x3 Con Ceros Y Unos\n"); //Llenamos El Vector 1
      srand(time(0));
    for(i=0; i<3; i++){
        *(Pmatriz+i) = rand () % 2;
        *(Pmatrizz+i) = rand () % 2;
        *(Pmatrizzz+i) = rand () % 2;

    }

    
       printf("\nMostrando Matriz  #1\n"); //Mostramos Las Matrices
    for(i=0; i<3; i++){
        printf("%d \t", *(Pmatriz+i));
        printf("%d \t", *(Pmatrizz+i));
        printf("%d \t", *(Pmatrizzz+i));
        printf("\n");
    }

    return 0;
}
