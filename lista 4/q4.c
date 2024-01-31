#include <stdio.h> 

int main () {
    float mes, dias; 
    
    printf("Digite a quantidade de dias:");
    scanf("%f" , &dias);
    
    if (dias>30) {
    
    while(dias>=30) {
        dias = dias - 30;
        mes = mes + 1;
    }
    
    printf("Tem %.0f mêses", mes);
}
    else {
        printf("Não há dias o bastante pra fechar um mês");
    }
    
    return 0;
