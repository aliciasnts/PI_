#include <stdio.h>
#include <math.h>

float calcIMC (float a , float b) {
    float potencia;
    potencia = pow(b,2);
    return a/potencia;
}

int main() {
    
    float peso;
    float altura;
    
    printf("Qual o seu peso em kg?\n");
    scanf("%f", &peso);
    
    printf("Qual a sua altura? \n");
    scanf("%f", &altura);
    
    printf("seu IMC é %.2f", calcIMC(peso, altura));
    return 0;
}

