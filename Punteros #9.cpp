#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    //Voy A Crear 2 Matrices De 3x3 Para Calcular Su Suma
    int matriz[3], matrizz[3], matrizzz[3];
    int *Pmatriz = matriz, *Pmatrizz = matrizz, *Pmatrizzz = matrizzz;
    int vector[3], vectorr[3], vectorrr[3];
    int *Pvector = vector, *Pvectorr = vectorr, *Pvectorrr = vectorrr;

    
    
       printf("Matriz #1\n");  //Llenamos El Vector 1
    for(i=0; i<3; i++){
        printf("Digite un numero: ");
        scanf("%d",&*(Pmatriz+i));
        printf("Digite Un Numero: ");
        scanf("%d",&*(Pmatrizz+i));
        printf("Digite Un Numero: ");
        scanf("%d",&*(Pmatrizzz+i));
    }
        printf("matriz#2\n");
    
    for(i=0; i<3; i++){  //Llenamos El Vector 2
        printf("Digite Un Numero: ");
        scanf("%d",&*(Pvector+i));
        printf("Digite Un Numero: ");
        scanf("%d",&*(Pvectorr+i));
        printf("Digite Un Numero: ");
        scanf("%d",&*(Pvectorrr+i));
    }
    
       printf("\n Mostrando Matriz  #1\n");  //Mostrando Las Matrices
    for(i=0; i<3; i++){
        printf("%d \t", *(Pmatriz+i));
        printf("%d \t", *(Pmatrizz+i));
        printf("%d \t", *(Pmatrizzz+i));
        printf("\n");
    }
       printf("Mostrando Matriz  #2\n");
    for(i=0; i<3; i++){
        printf("%d \t", *(Pvector+i));
        printf("%d \t", *(Pvectorr+i));
        printf("%d \t", *(Pvectorrr+i));
        printf("\n");
    }

    
    for(i=0; i<3; i++){  //Sumamos Las Matrices
        *(Pmatriz+i) += *(Pvector+i);
        *(Pmatrizz+i) += *(Pvectorr+i);
        *(Pmatrizzz+i) += *(Pvectorrr+i);
    }

    
    printf("Mostrando Matrices sumadas: \n"); //Mostramos La Matriz Sumada
    for(i=0; i<3; i++){
        printf("%d \t", *(Pmatriz+i));
        printf("%d \t", *(Pmatrizz+i));
        printf("%d \t", *(Pmatrizzz+i));
        printf("\n");
    }

    system("pause");
    return 0;
}
