#include <stdio.h>

int main() {
  
    float celsius;
    

    printf("temperatura em Celsius");
    scanf("%f", &celsius);
    
    float fahrenheit = celsius *9/5 + 32;
    
    printf("a temperatura em fahrenheit é %.1f Fº" ,fahrenheit);
    
    return 0;
}
