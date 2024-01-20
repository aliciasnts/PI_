/*Escrever programa para ler as três notas de
um aluno, calcular a média deste (média
ponderada: primeira nota com peso 1,
segunda nota com peso 2 e terceira nota com
peso 3) e determinar a situação do aluno:
APROVADO – se média igual ou superior a 7;
EM RECUPERAÇÃO – se não aprovado e com
média igual ou superior a 5; REPROVADO –
quando média inferior a 5.*/

#include <stdio.h>

float mediapond (float a, float b, float c) {
    float pesos;
    pesos = a + (b*2) + (c*3);
    float media;
    media = pesos/6;
    
    if (media>=7) {
        printf("Aprovado, média:%.1f" , media);
        return;
    }
    else if (media>= 5) {
        printf ("Em recuperação, média:%.1f", media);
        return;
    }
    else {
        printf("Reprovado, média:%.1f", media);
        return;
    }
}
int main() {
    
    float nota1;
    float nota2;
    float nota3;
        
    printf("Insira sua primeira nota: Ex: 9.0\n");
    scanf("%f", &nota1);
    printf("Insira sua segunda nota:\n");
    scanf("%f", &nota2);
    printf("Insira sua terceira nota:\n");
    scanf("%f", &nota3);
    
    printf("\n");
    mediapond(nota1, nota2, nota3);

    return; 
}
