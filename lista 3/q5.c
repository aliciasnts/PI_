/*Faça um programa para verificar se
determinado número inteiro lido N é divisível
por A ou B, mas não simultaneamente pelos
dois valores dados. São A e B, bem como N,
dados pelo usuário. Atendendo a condição
estabelecida, emitir mensagem “ATENDE
CONDIÇÃO”; caso contrário, exibir: “NÃO
ATENDE CONDIÇÃO”.*/
#include <stdio.h>
#include <math.h> 


void dividir (int a, int b, int c) {
    if ((c % a == 0 && c % b != 0) || (c % a != 0 && c % b == 0)) {
        printf("ATENDE A CONDIÇÃO");
         }
        
    else {
        printf("NÃO ATENDE CONDIÇÃO");
    }
}
int main() {
    
    int numeroUsuario, valorA, valorB;
    
    printf("Digite um número:");
    scanf("%d", &numeroUsuario );
    
   printf("Digite um número A:");
    scanf("%d", &valorA );
    
    printf("Digite um número B:");
    scanf("%d", &valorB );

    dividir(valorA, valorB, numeroUsuario);
    
    return 0;
}
