/*D. Maria tem um ônibus que faz diariamente, das 8 as 18
horas, o trajeto Rosa Elze – Atalaia. É feita 1 viagem por
hora e D. Maria registra o número de passageiros de cada
uma para identificar o horário com maior número de
passageiros. Para tanto foi implementado e discutido em
sala um programa em C. Efetuar ajustes nesse de forma
que seja identificado o horário com menor número de
passageiros, exibir o número médio de passageiros, a soma
de passageiros do dia e o montante recebido por D. Maria,
considerando que a passagem custa R$22,00. Aplicar for e
pelo menos 1 função.*/
#include <stdio.h>
#include <math.h>

void registroPassageiros (int *totalPassageiros, float *montante, int *horaMenorPassageiro) {
        //hora inicial
        *horaMenorPassageiro = 8;
        //numero imediatamente menor que 0, já que 0 é uma possibilidade de valor pra passageiros
        int menorPassageiro = -1; 

    for (int hora = 8; hora <= 18; hora++) {
        int numPassageiros;
        printf("Número de assageiros às %d horas: ", hora);
        scanf("%d", &numPassageiros);

        *totalPassageiros += numPassageiros;
        *montante += numPassageiros * 22.0; // Passagem custa R$22.00

        if (menorPassageiro == -1 || numPassageiros < menorPassageiro) {
            menorPassageiro = numPassageiros;
            *horaMenorPassageiro = hora;
        }
    }
}

int main() {
    int totalPassageiros = 0;
    float montante = 0.0;
    int horaMenorPassageiro = 0;

     printf("Bem vindo!\n Por favor, informe ao lado da hora de registro atual a quantidade de passageiros a qual deseja salvar no horario correspondente.\n Por gentileza, utilize numeros inteiros. Valores que não correspondem ao pedido não serão computados.\n\n");

    registroPassageiros(&totalPassageiros, &montante, &horaMenorPassageiro);

    float mediaPassageiros = (float)totalPassageiros / 11.0;

    printf("Horário com menor número de passageiros: %d horas\n", horaMenorPassageiro);
    printf("Número médio de passageiros: %.2f\n", mediaPassageiros);
    printf("Soma de passageiros do dia: %d\n", totalPassageiros);
    printf("Montante recebido por D. Maria: R$%.2f\n", montante);

    return 0;
}
