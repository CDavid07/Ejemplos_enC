/*
Programa:  Operaciones aritméticas con variables de diferentes tipos Seccion1
Autor: David Arturo Castellanos Guzman
Es un ejercicio de programacion basica que realiza las operaciones 
aritméticas básicas (suma, resta multiplicación y división).
Imprime el resultado de cada operación de manera ordenada
*/

#include<stdio.h>

int main(){

    int opc, a=10;
    float b=2.5;


    printf("Suma = %1.1f\n", a+b);

    printf("Resta = %1.1f\n",a-b);

    printf("Multiplicacion = %1.1f\n",a*b);

    if(b==0){ //el valor es cero marcaria un error
        printf("No se puede dividir entre cero\n");
    }
    else{
        printf("Division = %1.1f\n", a/b);
    }

    return 0;

}