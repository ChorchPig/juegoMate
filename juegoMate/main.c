#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "prototipos.h"

int main(){
    setlocale(LC_ALL, "spanish");
    int option=1, puntaje=0;
    while(option!=0){ //Inicio de menú
        printf("Seleccione una opción: \n");
        printf("\t1. Juego de álgebra \n\t2. Juego de Geografía\n\t3. Mostrar puntaje\n");
        printf("\t0. Salir del programa \n");
        scanf("%i", &option);
        switch(option){
            case 0: confirmarSalida(&option); break;
            case 1: juegoAlgebra(&puntaje); break;
            case 2: printf("Ud. se encuentra en la función 'juegoGeometria'.\n"); break;
            case 3: printf("Puntaje actual: %i\n", puntaje); break;
            default : printf("No se seleccionó una opción existente");
        }
    }
    return 0;
}
