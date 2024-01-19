
#include <stdio.h>
#include <math.h>

float areaCirc (float a) {
    float pi = 3.14;
    float raio2;
    raio2 = pow(a, 2);
    return 3.14 * raio2;
}

float areaQuad (float b) {
    float mult;
    mult = b*b;
    return mult;
}

int main() {
    
    float raio;
    float ladoQuad;
    
    printf("Qual o raio do circulo?\n");
    scanf("%f", &raio);
    
    printf("Qual a lateral do quadrado? \n");
    scanf("%f", &ladoQuad);
    
    printf(" a área do seu cirulo é %.1f, e a área do seu quadrado é %.1f", areaCirc(raio) , areaQuad(ladoQuad));
    return 0;
}
