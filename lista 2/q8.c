#include <stdio.h>
#include <math.h>

  void cambio (float r, float *dollar,  float *euro) { 
    *dollar = r/4.95;
    *euro = r/5.37;
}

int main() {

   float real;
   float dollar1;
   float euro1;
   
    printf("quanto em reais deseja realizar o cambio? \n");
    scanf("%f" , &real);
    
    cambio( real, &dollar1, &euro1);
    
    printf("O valor em dollar é; %.2f \n" , dollar1);
    printf("O valor em euro é: %.2f \n " , euro1);
    return 0;
}
