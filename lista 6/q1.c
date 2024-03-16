/*Sabendo-se que Y=toupper(X) corresponde a
função em C (biblioteca ctype.h) que atribui à
variável Y do tipo char o valor da variável X
(também do tipo char) em maiúsculo.

Escrever programa para ler uma palavra com até 20
caracteres e exibi-la com letras maiúsculas.
Exemplos: dado brasileiro, retorna BRASILEIRO.
Dado Nordeste, retorna NORDESTE*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char palavra[21]; //contando com o caracter nulo

    printf("Digite uma palavra com até 20 caracteres: ");
    scanf("%20s", palavra);
  
    for(int i = 0; palavra[i] != '\0'; i++) {
        palavra[i] = toupper(palavra[i]);}
  
    printf("Palavra em maiúsculas: %s\n", palavra);

    return 0;}
