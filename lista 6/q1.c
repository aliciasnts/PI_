/*Maria está fazendo a “Dieta de Saturno” para
emagrecimento e a previsão é de que a perda de peso
seja de 5 kg mensais. Ajustar programa em C para ler o
peso inicial e o peso almejado, exibir o peso alcançado
(em teoria) a cada mês, conforme o que prevê a dieta, e
corrigir os erros que ocorrem quando o peso almejado
não é múltiplo de 5, bem como quando o peso inicial é
menor que o peso almejado. Aplicar for.*/

#include <stdio.h>
#include <math.h>
float calcular( float inicial, float final){
    if (final>inicial) {
        printf("Erro: o peso final é maior do que o inicial.");
    }
    else{
        float a = (inicial-final)/5;
        for (int i=0; i>=a; i++) {
            (int) a 
        }
    }
    
}

int main() {
    
    float pesoInicial, pesoFinal;
    
    printf("Qual o seu peso atual?\n");
    scanf("%f", &pesoInicial);
    printf("Qual peso deseja alcançar ao fim da dieta?\n");
    scanf("%f" , &pesoFinal);

printf("%f", calcular(pesoInicial, pesoFinal));
    return 0;
}
