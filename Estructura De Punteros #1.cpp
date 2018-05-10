#include <stdio.h>
#include <stdlib.h>


void ingresarcorredor();
void categoria();
void mostrar();
void copiar(char cadena1[],char cadena2[]);


struct competidores{
char nombre[20];
int edad;
char sexo[20];
char club[20];
}competidor,*pcompetirdor=&competidor;
char cate[20];


char infantil[]="infantil";
char joven[]="joven";
char mayor[]="mayor";

int main(){

    ingresarcorredor();
    categoria();
    mostrar();


	return 0;
}
void ingresarcorredor(){
    int i=0;
   printf("Digite Los Datos Del Corredor:\n");
   printf("Nombre: ");
   fgets((pcompetirdor)->nombre,30,stdin);
   printf("Edad: ");
   scanf("%d",&(pcompetirdor)->edad);
   fflush(stdin);
   printf("Sexo: ");
   fgets((pcompetirdor)->sexo,30,stdin);
   printf("Club: ");
   fgets((pcompetirdor)->club,30,stdin);
}

void categoria(){
if((pcompetirdor)->edad<=15){
        copiar(cate,infantil);
}else{
   if((pcompetirdor)->edad<=30){
        copiar(cate,joven);
}else{
    if((pcompetirdor)->edad>30){
        copiar(cate,mayor);
        }

    }
}
}
void mostrar(){
printf("\n---------------------------\n");
printf("DATOS PERSONA\n");
printf("Nombre: %s",(pcompetirdor)->nombre);
printf("Edad: %d\n",(pcompetirdor)->edad);
printf("Sexo: %s",(pcompetirdor)->sexo);
printf("Club: %s",(pcompetirdor)->club);
printf("Categoria: %s",cate);
printf("\n---------------------------\n");
}

void copiar(char cadena1[],char cadena2[]){
int contador=0;
    for(int i=0;i<30;i++){
      if(cadena1[i]=='\n'){
        break;
    }
    contador++;
}
for(int i=0;i<contador;i++){
    cadena1[i]=cadena2[i];
}
}

