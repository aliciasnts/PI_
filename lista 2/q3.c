#include <stdio.h>
#include <math.h>

int cubo (float a) {
    return pow(a,3);
}
int main() {
  
    float N;
    
    printf("Digite um número:\n");
    scanf("%f", &N);
    
    printf("%.1f ao cubo é igual a %d", N , cubo(N));
    return 0;
}
