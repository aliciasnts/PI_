
#include <stdio.h>
#include <math.h>

float cambioDollar(float a){
    float valorDollar = 4.95;
    return a/valorDollar;
};

float cambioEuro( float a) {
    float valorEuro = 5.37;
    return a/valorEuro;
};

int main() {
    
    float v;
    // Write C code here
    printf("quanto em reais deseja realizar o cambio? \n");
    scanf("%f" , &v);
    
    printf("O valor em dollar é; %.2f \n" , cambioDollar(v));
    printf("O valor em euro é: %.2f \n " , cambioEuro(v));

    return 0;
}
