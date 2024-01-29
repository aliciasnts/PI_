/*Escrever programa para exibir menu: U – unidade, D –
dezena, C – centena, M – unidade de milhar e Z –
dezena de milhar; ler um número de 0 a 99.999 e deste
identificar a unidade, ou a dezena, ou a centena, ou a
unidade de milhar, ou a centena de milhar; conforme a
opção selecionada.
Deve funcionar para o caso do usuário pressionar letras
maiúsculas ou minúsculas.
Deve ser aplicado switch-case.
Deve haver mensagem de erro para o caso do usuário
selecionar opção não existente.
Deve ser modularizado.*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int dezMilhar (int n) {
    return n / 10000;
}
int unidMilhar (int n) {
    return (n / 1000) % 10;
}
int centena (int n) {
    return (n / 100) % 10;
}
int dezena (int n) {
    return (n / 10) % 10;
}
int unidade (int n) {
    return n%10;
}

int main() {
    
    int numero;
    char operador;
    
    
    printf("Digite um número inteiro:\n");
    scanf("%d" , &numero);
    
    printf("Selecione qual das opções deseja exibir:\n");
   
    printf("U – unidade\n");
    printf("D – dezena\n");
    printf("C – centena\n");
    printf("M – unidade de milhar\n");
    printf("Z – dezena de milhar\n");
    
    scanf(" %c" , &operador);
    
    operador = toupper(operador);

    switch (operador) {
        case 'U': printf ("O número dado tem %d unidades" , unidade(numero)); break;
        case 'D': printf ("O número dado tem %d dezenas" , dezena(numero)); break;
        case 'C': printf ("O número dado tem %d centenas" , centena(numero)); break;
        case 'M': printf ("O número dado tem %d unidades de milhar" , unidMilhar(numero)); break;
        case 'Z': printf ("O número dado tem %d dezenas de milhar" , dezMilhar(numero)); break;
    }
    return 0;
}
