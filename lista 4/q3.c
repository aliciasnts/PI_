/* Ler notas de alunos e identificar se cada foi aprovado.
Considerar como sistema de avaliação: em princípio, 3
notas; são aprovados os alunos com média 7; para os
alunos com média acima de 3, é possibilitado fazer 4a
avaliação, então a média passa a ser 5 para obtenção da
aprovação. Após a identificação de que um aluno foi
aprovado, ou não; deve ser questionado se o usuário (do
programa) deseja verificar a situação de outro aluno. */

#include <stdio.h>

int main() {
  char continuar;

do {
 float nota1, nota2, nota3, media;

 printf("Qual sua primeira nota?");
 scanf("%f", &nota1);

 printf("Qual sua segunda nota?");
 scanf("%f", &nota2);

 printf("Qual sua terceira nota?");
 scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) / 3;

if (media >= 7) {
  printf("Aluno aprovado!\n");
  
} else if (media >= 3) {
  
  char recuperacaoQuartaProva;
  printf("Você pode fazer a recuperação. Deseja fazer a quarta prova? \n s - sim \n n - não"); 
  scanf(" %c", &recuperacaoQuartaProva);
            
if (recuperacaoQuartaProva == 'S' || recuperacaoQuartaProva == 's') {
  
  float nota4;
  printf("Qual a sua quarta nota?\n");
  scanf("%f", &nota4);
              
media = (nota1 + nota2 + nota3 + nota4) / 4;

if (media >= 5) {
  printf("Aluno aprovado!\n");
} 

else {
  printf("Aluno reprovado. Média final: %.2f\n", media);} 
    } 
}
  
  printf("Deseja verificar a situção tro aluno?\n s - sim \n n - não ");
  scanf(" %c", &continuar);

} while (continuar == 's' || continuar == 'S');

return 0;
}
