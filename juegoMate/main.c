#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "prototipos.h"

int main(){
    setlocale(LC_ALL, "spanish");
    int option=1, puntaje=0;
    while(option!=0){ //Inicio de men�
        printf("Seleccione una opci�n: \n");
        printf("\t1. Juego de �lgebra \n\t2. Juego de Geograf�a\n\t3. Mostrar puntaje\n");
        printf("\t0. Salir del programa \n");
        scanf("%i", &option);
        switch(option){
            case 0: confirmarSalida(&option); break;
            case 1: juegoAlgebra(&puntaje); break;
            case 2: printf("Ud. se encuentra en la funci�n 'juegoGeometria'.\n"); break;
            case 3: printf("Puntaje actual: %i\n", puntaje); break;
            default : printf("No se seleccion� una opci�n existente");
        }
    }
    return 0;
}
