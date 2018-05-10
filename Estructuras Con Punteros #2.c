#include <stdio.h>
#include <stdlib.h>

struct Estudiante{     //Ejercicio 2 De Estructuras Con Punteros
	char nombre[30];
	int edad, grado;
	float promedio;
}estu[3],*pestu=estu;

void crearestudiante();
void mejorpromedio();
void mostrar();

int pos=0;

int main(){
crearestudiante();
mejorpromedio();
mostrar();
	return 0;
}
void crearestudiante(){
printf("Digite Los Datos De Los 3 Estudiantes:\n");
for(int i=0;i<3;i++){
    fflush(stdin);
    printf("******************************\n");
    printf("Estudiante #%d\n",i+1);
    printf("Nombre: \n ");
    fgets((pestu+i)->nombre,30,stdin);
    printf("Edad: \n ");
    scanf("%d",&(pestu+i)->edad);
    printf("Grado: \n");
    scanf("%d",&(pestu+i)->grado);
    printf("Promedio: \n ");
    scanf("%f",&(pestu+i)->promedio);

}
    printf("******************************\n");
}
void mejorpromedio(){
float mayor=0;
for (int i=0;i<3;i++){
    if((pestu+i)->promedio>mayor){
        mayor=(pestu+i)->promedio;
        pos=i;
    }
}
}
void mostrar(){
    printf("******************************\n");
    printf("\nEl Estudiante Con El Mejor Promedio es\n");
	printf("Estudiante No. %d\n", pos + 1);
	printf("Nombre: %s", (pestu+pos)->nombre);
	printf("Edad: %d\n", (pestu+pos)->edad);
	printf("Grado: %d\n", (pestu+pos)->grado);
	printf("Promedio: %.1f\n",(pestu+pos)->promedio);
    printf("******************************\n");
}
