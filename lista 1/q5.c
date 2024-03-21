#include <stdio.h>

int main() {
    
    float distancia;
    float velocidade;
    

    printf("Quanto quer percorrer, em metros?");
    scanf("%f", &distancia);
    printf ("Qual a velocidade que quer atingir, em metros por segundo?");
    scanf("%f", &velocidade);
    
    //distancia/velocidade =  tempo
    
    float tempo = (distancia/velocidade)/60;
    
    printf("você irá percorrer essa distancia no tempo de aproximadamente  %.2f minutos" , tempo);
    
    return 0;

}
