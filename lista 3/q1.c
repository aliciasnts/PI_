/*Os colegas do filho de Sr. Zé estão sentindo dificuldade para
alugar um ônibus para levá-los ao “Museu da Gente
Sergipana”. Então Sr. Zé resolveu disponibilizar sua Kombi,
mas a depender do número de inscritos, serão necessárias
muitas viagens, e alguns passageiros deverão ir de coletivo.
Considerando que a Kombi tem capacidade para transportar 11
pessoas (fora o motorista – Sr. Zé), escrever um programa em
C, para, dado o número de inscritos no passeio ao Museu,
exibir o número de viagens que devem ser necessárias e o
número de passagens de coletivo. Exemplos: se 22 pessoas –
2 viagens de kombi e 0 passagem em coletivo; se 37 pessoas
– 3 viagens e 4 passagens em coletivo. Vale esclarecer que se
o número de passageiros for inferior a 11, Sr. Zé os levará de
Kombi.*/

#include <stdio.h>

float viagens (int a) {
    if (a % 11==0) {
        printf("serão nescessárias %d vigens de Kombi e nenhuma de coletivo" , a/11);
        return 0; }
    else {
        printf("serão nescessárias %d viagens de Kombi e %d passagens de coletivo\n", a/11 , a%11);
        return;}
}
int main() {
  
    int alunos;
    
    printf("quantos alunos irão ao museu?\n");
    scanf("%d", &alunos);
    
    return viagens(alunos);

}
