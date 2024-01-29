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
    return sqrt(2*(pow(a,2)));
};

int main() {
    
    int operador;
    int lado;
   
    printf("1 – Área\n");
    printf("2 – Perímetro\n");
    printf("3 – Diagonal\n");
    
    scanf("%d" , &operador);
     
     
    printf("Qual a medida do lado do triangulo,em centimetros?\n");
    scanf("%d" , &lado);

//usando if else
    
    /*if (numero == 1) {
        printf ("A área do quadrado é %d centimetros quadrados" , area(lado));
    }
    else if (numero == 2) {
        printf("O perímetro do quadrado é %d centimetros quadrados" , perimetro(lado));
    }
    else if (numero == 3) {
        printf("A diagonal do quadrado é aproximadamente %.2f centimetros quadrados", diagonal(lado));
    }
    else {
        printf("A opção selecionada não é válida.");
    }
    */

// usando switch case
    
    switch (operador) {
        case 1: printf ("A área do quadrado é %d centímetros quadrados" , area(lado)); break;
        case 2: printf("O perímetro do quadrado é %d centímetros quadrados" , perimetro(lado)); break;
        case 3: printf("A diagonal do quadrado é aproximadamente %.2f centímetros quadrados", diagonal(lado)); break;
    }
    return 0;
} 
