#include <stdio.h>

int main() {
    
    float valor; //variavel numerica qualquer dada pelo usuario
    float *primeiroValor; //ponteiro
    
    primeiroValor = &valor; //comando que iguala o ponteiro a localização da variavel, o que permite que ele aponte o conteudo armazenado na localização
    
    printf("insira um numero\n");
    scanf("%f", &valor);

    printf("%p\n", &valor); // imprime a localização do valor gramas ao &
    printf("%f\n", *primeiroValor); //imprime o valor atual do ponteiro
    
    return 0;
}
