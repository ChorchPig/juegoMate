#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include "prototipos.h"

void confirmarSalida(void *option){
    printf("Estás por salir del programa, para confirmar esta opción presione 0.\n");
    scanf("%i", (int *)option);
}

void juegoAlgebra(int *puntaje){
    int option=1;
    while(option!=0){ //Inicio de menú
        int num1=rand()%10;
        int num2=rand()%10;
        printf("Elija una operación: \n");
        printf("\t1. Suma \n\t2. Resta\n\t3. Multiplicación \n\t4. División \n");
        printf("\t0. Volver a selección de modo \n");
        scanf("%i", &option);
        (!option)? option=0 : pedirResultado(num1, num2, option, puntaje);
    }
}

void pedirResultado(int num1, int num2, int option, int *puntaje){
    int respuesta, resultado;
    switch(option){
        case 1: {
            resultado=num1+num2;
            printf("%i + %i = ", num1, num2);
            } break;
        case 2: {
            resultado=num1-num2;
            printf("%i - %i = ", num1, num2);
            } break;
        case 3: {
            resultado=num1*num2;
            printf("%i * %i = ", num1, num2);
            } break;
        case 4: {
            resultado=0;
            if(num2!=0)resultado=num1%num2;
            printf("%i %% %i = ", num1, num2);
            } break;
    }
    scanf("%i", &respuesta);
    printf("\n");
    (respuesta==resultado)? printf("Correcto.\n"):printf("Incorrecto.\n");
    (respuesta==resultado)? (*puntaje)++ : (*puntaje)--;
}

void juegoGeometria(int *puntaje){
    int option=1;
    while(option!=0){ //Inicio de menú
//        int num1=rand()%10;
//        int num2=rand()%10;
        printf("Elija una operación: \n");
        printf("\t1. Calcular el área \n\t2. Calcular el perímetro\n");
        printf("\t0. Volver a selección de modo \n");
        scanf("%i", &option);
        (!option)? option=0 : printf("Función faltante.\n");
    }
}
