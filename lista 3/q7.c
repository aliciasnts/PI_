/* Escrever programa para: (a) exibir menu: 1 –
area, 2 – perímetro e 3 – diagonal; (d) ler
medida de lado de um quadrado; (c) exibir
a informação solicitada pelo usuário
conforme opção de menu selecionada.
Deve haver mensagem de erro para o caso do
usuário selecionar opção não existente.
Deve ser modularizado. */

#include <stdio.h>
#include <math.h>

int area (int a) {
    return a*a;
};

int perimetro (int a) {
    return a*4;
};

float diagonal (int a) {
    int potencia;
    potencia = pow(a,2);
    int mult;
    mult = 2*potencia;
    int raiz;
    raiz = sqrt(mult);
    return raiz;
};

int main() {
    
    int numero;
    int lado;
   
    printf("1 – Área\n");
    printf("2 – Perímetro\n");
    printf("3 – Diagonal\n");
    
    scanf("%d" , &numero);
    
    printf("Qual a medida do lado do triangulo,em centimetros?\n");
    scanf("%d" , &lado);
    
     if (numero == 1) {
        printf ("A área do quadrado é %d centimetros quadrados" , area(lado));
    }
    else if (numero == 2) {
        printf("O perímetro do quadrado é %d centimetros quadrados" , perimetro(lado));
    }
    else if (numero == 3) {
        printf("A diagonal do quadrado é %d centimetros quadrados", diagonal(lado));
    }
    else {
        printf("A opção selecionada não é válida.");
    }
    
    return 0;
} 



//TA ERRADO
