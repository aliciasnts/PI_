/*Faça um programa para ler um número
inteiro, positivo de três dígitos, e gerar outro
número formado pelos dígitos invertidos do
número lido. (Ex: Numero Lido = 123;
Numero Gerado = 321) Em seguida informar:
NÚMERO GERADO MAIOR QUE NÚMERO LIDO ou
NÚMERO LIDO MAIOR QUE NÚMERO GERADO, ou
ainda, NÚMERO GERADO IGUAL AO NÚMERO
LIDO.*/


#include <stdio.h>
#include <math.h> 


int inverter (int a) {
    int valorCentena = a/100; //retorna 1
    int resto = a%100; //sobra 23
    int valorDezena = resto/10; // retorna 2
    int valorUnidade = resto%10; 
    
    return valorUnidade*100 + valorDezena*10 + valorCentena;
    
}
int main() {
    
    int numeroUsuario;
    
    printf("Digite um número:");
    scanf("%d", &numeroUsuario );
    
    printf("O número inverso dele é: %d", inverter(numeroUsuario));

    return 0;
}
