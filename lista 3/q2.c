/*Para conter o crescimento da quantidade de gatos
abandonados na UFS, e seus consequentes prejuízos, surgiu o
projeto "CastraçãoSolidária", a partir do qual 4 veterinários
experientes e 1 recém formado decidiram efetuar capturas e
castrações todos os dias úteis, sendo os animais capturados
divididos igualitariamente entre os veterinários experientes, e
havendo sobras (não sendo possível uma divisão exata), o
restante fica sob a responsabilidade do 5o veterinário – recém
formado. Por exemplo, se capturados 22 gatos, cada
veterinário experiente fica com 5 castrações, e o recém
formado fica com 2. Se capturados 19, os experientes ficam
com 4 e o formado recentemente fica com 3. Escrever
programa em C para ler número de gatos capturados e exibir a
distribuição das castrações entre os veterinários. Vale
esclarecer que se capturados 4 ou menos gatos, as castrações
ficam sob a responsabilidade de todos os veterinários, em
conjunto.*/

#include <stdio.h>

float castracoes (int a) {
    if (a % 4 <0) {
        printf("Todos os veterinarios ficarão responsáveis, pois o numero de animais é pequeno demais para a distribuição correta entre eles");
        return; }
    else if (a%4 ==0) {
        printf("Cada veterinário experiente ficará com %d cirurgias e o recém formado não fará nenhuma", a/4);
        return;}
    else {
        printf("Cada veterinário experiente ficará com %d cirurgias e o recém formado fará %d cirurgias", a/4, a%4);
        return;
    }
        
}
int main() {
  
    int gatosCapturados;
    
    printf("Quantos gatos foram capturados?\n");
    scanf("%d", &gatosCapturados);
    
    return castracoes(gatosCapturados);

}
