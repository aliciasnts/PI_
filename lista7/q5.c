/* Na universidade “DuSabiTudu” os alunos são identificados por
matrículas compostas por 10 dígitos. Os 4 primeiros dígitos
correspondem ao ano em que o aluno entrou na instituição.
Assim, todos os alunos cujas matriculas iniciam por 2012
ingressaram no curso superior no ano de 2012. Os dígitos 5 e 6 da
matrícula correspondem ao curso; sendo: 97 para agroecologia e
99 para gerontologia. Escrever programa para ler a matricula de
100 alunos inscritos no programa “CienciasAlémDasFronteiras” e
identificar quantos alunos ingressaram num dado ano A no curso
de gerontologia. Aplicar função definida pelo programador. */

#include <stdio.h> 
#include <math.h>

int verificarMatricula(char matricula[], int ano) {
    // seleciona os dígitos relevantes da matrícula
    int anoMatricula = (matricula[0] - '0') * 1000 + (matricula[1] - '0') * 100 + (matricula[2] - '0') * 10 + (matricula[3] - '0');
    int curso = (matricula[4] - '0') * 10 + (matricula[5] - '0');

    // verifica se a matrícula corresponde
    if (anoMatricula == ano && curso == 99) {
        return 1;} // matrícula válida
    else {
        return 0;}}// matrícula inválida


int main() {
    char matricula[11];
    int ano;
    int alunosGerontologia = 0; //contador de alunos de gerontologia

    printf("Digite o ano que deseja checar: ");
    scanf("%d", &ano);
    printf("Digite as matriculas dos 100 alunos:\n");
    
    for (int i = 0; i < 100; i++) {
        printf("Matricula do aluno %d: ", i + 1);
        scanf("%s", matricula);


        if (verificarMatricula(matricula, ano)) {
            alunosGerontologia++;}}

    printf("No ano %d, ingressaram %d alunos no curso de gerontologia", ano, alunosGerontologia);

    return 0;}
