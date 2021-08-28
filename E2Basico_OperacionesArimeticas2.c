/*
Programa: peraciones aritméticas con variables de diferentes tipos Seccion1
Autor: David Arturo Castellanos Guzman
Es un ejercicio de programacion basica  que realiza las operaciones 
aritméticas básicas (suma, resta multiplicación y división).
Pide valores al usuario y le regresa la operacion
*/

//Bibliotecas
#include <stdio.h>

//Funcion que nos ayuda a que ingrese valores el usuario, se utiliza apuntadores para guardar valores y es util siendo una funcion generica
void ingresaValores(int *a, float *b){

    printf("Ingresa el primer numero (entero): \n");
    scanf("%d", a);
    printf("Ingresa el segundo numero: (flotante)\n");
    scanf("%f", b);

}

int main(){

    //variable para guardar el valor de menu del usuario
    int opcion = 0;
    //variables para guardar valores
    int a;
    float b;

    while (opcion != 5){

        printf("MENU\n"); 
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Ingresa tu numero opcion: \n");
        scanf("%d", &opcion);

        if (opcion == 1){
            ingresaValores(&a,&b);
             printf("Suma = %1.1f\n", a+b);            
             
        }else 
            if (opcion == 2){

                ingresaValores(&a,&b);
                printf("Resta = %1.1f\n",a-b);

            }else 
                if (opcion == 3){

                    ingresaValores(&a,&b);
                    printf("Multiplicacion = %1.1f\n",a*b); 

                }
                else 
                    if (opcion == 4){

                        ingresaValores(&a,&b);
                        if(b==0){ //el valor es cero marcaria un error
                            printf("No se puede dividir entre cero\n");
                        }
                        else{
                            printf("Division = %1.1f\n", a/b);
                        }
                    
                    }
                    else 
                        if (opcion == 5){
                            printf("Hasta luego\n");
                        }
                        else{ // No ingreso ninguna de las opciones
                            printf("Opcion invalida\n");
                        }
    } 
    return 0;
}