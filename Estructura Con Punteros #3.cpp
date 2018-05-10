#include <stdlib.h>
#include <stdio.h>


struct empleado{
char nombre[20];
float salario;
}emple[100],*pemple=emple;


void ingresar_empleados();
void imprimir();


float mayor=0;
float menor=999999;
int posmayor,posmenor;
int empleadon;


int main(){
  ingresar_empleados(emple);
imprimir(emple);
    return 0;
}

void ingresar_empleados(){  //ingresamos Los Usuarios
     int numempleados;
   printf("Digite El Numero De Empleados: ");
   scanf("%d",&numempleados);
    for(int i=0;i<numempleados;i++){
            printf("---------------------------------------------\n");
            printf("EMPLEADO #%d\n",i+1);
            printf("%d. Digite Su Nombre: ",i+1);
            fflush(stdin);
            fgets((pemple+i)->nombre,20,stdin);
            printf("%d. Digite Su Salario: ",i+1);
            scanf("%f",&(pemple+i)->salario);
            
            if((pemple+i)->salario>mayor){ //Sacamos El Salario Mayor
                mayor=(pemple+i)->salario;
                posmayor=i;
            }
            
             if((pemple+i)->salario<menor){ //Sacamos El Menor Salario
                menor=(pemple+i)->salario;
                posmenor=i;
            }
    }
}

void imprimir(){ //Imprimimos El Menor Y El Mayor Salario
       printf("---------------------------------------------\n");
            printf("El Empleado Con Mayor Salario Es:\n");
            printf("nombre: %s",(pemple+posmayor)->nombre);
            printf("salario: %f",(pemple+posmayor)->salario);
  printf("\n---------------------------------------------\n");
            printf("El Empleado Con Menor Salario Es:\n");
            printf("Nombre: %s",(pemple+posmenor)->nombre);
            printf("Salario: %f",(pemple+posmenor)->salario);
    printf("\n---------------------------------------------\n");
}



