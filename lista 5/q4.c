/*Na disciplina “Programação Imperativa” há 50 alunos e 12
avaliações. Para obtenção de aprovação o aluno deve ter no
mínimo 5 notas maior ou igual a 7. Escrever programa para
ler notas de cada um dos 50 alunos e identificar se foi
aprovado.*/
#include <stdio.h>
#include <math.h>

int main() {
    int alunosAprovados = 0;

    // Loop para cada aluno
    for (int aluno = 1; aluno <= 50; aluno++) {
        int notasMaiorSete = 0;

        // Loop para cada avaliação
        for (int avaliacao = 1; avaliacao <= 12; avaliacao++) {
            float nota;
            printf("Digite a nota do aluno %d na avaliação %d: ", aluno, avaliacao);
            scanf("%f", &nota);

            if (nota >= 7.0) {
                notasMaiorSete++;}}

        // Verificar se o aluno foi aprovado ou não
        if (notasMaiorSete >= 5) {
            printf("\nO aluno %d foi aprovado!\n\n", aluno);
            alunosAprovados++;} 
            else {
            printf("\nO aluno %d foi reprovado.\n\n", aluno);}}

    printf("\nTotal de alunos aprovados: %d\n", alunosAprovados);

    return 0;
}
