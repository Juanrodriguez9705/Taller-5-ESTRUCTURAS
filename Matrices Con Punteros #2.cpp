#include <stdio.h>
#include <stdlib.h>
#include <ctime>
int main()
{
    int i;
    
    int matriz[3], matrizz[3], matrizzz[3]; //Creamos 2 matrices de 3x3
    int *Pmatriz = matriz, *Pmatrizz = matrizz, *Pmatrizzz = matrizzz;


      srand(time(0));   //Llenamos El Vector 1
    for(i=0; i<3; i++){
          *(Pmatriz+i) = rand () % 100;
        *(Pmatrizz+i) = rand () % 100;
        *(Pmatrizzz+i) = rand () % 100;
    }

    
    printf("Mostrando Matriz \n"); //Mostramos La Matriz
    for(i=0; i<3; i++){
        printf("%d \t", *(Pmatriz+i));
        printf("%d \t", *(Pmatrizz+i));
        printf("%d \t", *(Pmatrizzz+i));
        printf("\n");
    }
    return 0;
}
