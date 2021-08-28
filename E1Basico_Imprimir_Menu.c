/*
Programa: Imprimir un menú
Autor: David Arturo Castellanos Guzman
Es un ejercicio de programacion basica  imprime un menú de opciones
donde se le pasa una opcion y el programa muestra que opcion se mando.
*/

//Bibliotecas
#include <stdio.h>

int main(){

    //variable para guardar el valor del usuario
    int opcion = 0;

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
            printf("Elegiste la opción %d\n",opcion);
             
        }else 
            if (opcion == 2){
            printf("has seleccionado la opción: %d\n",opcion);
             
            }else 
                if (opcion == 3){
                    printf("has seleccionado la opción: %d\n",opcion);
                }
                else 
                    if (opcion == 4){
                    printf("has seleccionado la opción: %d\n",opcion);
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