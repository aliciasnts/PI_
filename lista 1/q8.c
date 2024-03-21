 
#include <stdio.h>

int main() {
  
    float comprimento;
    float largura;
    
    printf("Qual o comprimento do retângulo, em metros?\n");
    scanf("%f", &comprimento);
    
    printf("qual a largura do retângulo, em metros?\n");
    scanf("%f", &largura);
    
    float area = comprimento*largura;
    
    printf("a área do retângulo é %.2f metros quadrados", area);
    return 0;
}
