#include <stdio.h>
#include <math.h>

float divisao (float a, float b) {
    float resultado;
    resultado = a/b;
    return resultado;
   
}

float qtdTotalCaixas(float c, float d) {
    float divisao;
    divisao = c/d;
    return ceil(divisao);
    }
    
    
int main() {
  
    float comprimidos;
    float qtdPorCaixa;
    

    printf("Quantos comprimidos serão utilizados?\n");
    scanf("%f", &comprimidos);
    
    printf("quantos comprimidos há por caixa dessa medicação?\n");
    scanf("%f", &qtdPorCaixa);
    
   
    printf("Você terá que comprar  %0.2f caixas dessa medicação, mas utilizará apenas utilizar %0.2f delas", qtdTotalCaixas(comprimidos, qtdPorCaixa), divisao(comprimidos, qtdPorCaixa));
    
    return 0;
}

