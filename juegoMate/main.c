#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include "headers/mate.h"
int main(){
    setlocale(LC_ALL, "spanish");
    int op;
    while(op !=4){
        srand(time(0));
        int num1=rand()%10, num2=rand()%10;
        printf("�Qu� operaci�n vas a practicar?\n1.Suma 2.Resta 3.Multiplicaci�n 4.Quiero salir\n");
        scanf("%i", &op);
        if(op!=4)calcularRespuesta(num1, num2, op);
        else{
            printf("Est�s por salir de la aplicaci�n, presion� 4 para confirmar.\n");
            scanf("%i", &op);
        }
    }
    return 0;
}
