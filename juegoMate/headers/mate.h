#define PI 3.1415
void calcularRespuesta(int, int, int);
int resta(int, int);
int multi(int, int);
int suma(int, int);
float Acuadrado (float);
float Arectangulo (float, float);
float Atriangulo (float, float);
float Acirculo(float);

void calcularRespuesta(int num1, int num2, int op){
    int resultado, respuesta;
    switch(op){
            case 1 : resultado=suma(num1, num2); break;
            case 2 : resultado=resta(num1, num2); break;
            case 3 : resultado=multi(num1, num2); break;
    }
    switch(op){
            case 1 : printf("%i + %i = ??\n", num1, num2); break;
            case 2 : printf("%i - %i = ??\n", num1, num2); break;
            case 3 : printf("%i * %i = ??\n", num1, num2); break;
    }
    scanf("%i", &respuesta);
    (resultado==respuesta)? printf("¡Correcto!\n") : printf("Incorrecto, respuesta correcta: %i\n", resultado);
}
int suma(int num1, int num2){
    int resultado=num1+num2;
    return resultado;
}
int resta (int num1, int num2){
    int resultado=num1-num2;
    return resultado;
}
int multi(int num1, int num2){
    int resultado=num1*num2;
    return resultado;
}

float Acuadrado (float l){
    float resultado=l*l;
    return resultado;
}
float Arectangulo (float b, float h){
    float resultado=b*h;
    return resultado;
}
float Atriangulo (float b, float h){
    float resultado=b*h/2;
    return resultado;
}
float Acirculo(float r){
    float resultado=r*r*PI;
    return resultado;
}
