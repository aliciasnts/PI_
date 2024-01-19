#include <stdio.h>
#include <math.h>


int funcaoQtdTurmas (float a, float b) {
     float divisao;
     divisao = a/b;
     return ceil(divisao);
}

int main() {
  
    float totalAlunos;
    float maxPorTurma;
    
    printf("Quantos alunos estão matriculados?\n");
    scanf("%f", &totalAlunos);
    
    printf("Até quantos alunos uma turma pode ter?\n");
    scanf("%f", &maxPorTurma);
    
    printf("Você terá um total de %d turmas", funcaoQtdTurmas(totalAlunos,maxPorTurma));
    return 0;
}
