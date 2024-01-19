#include <stdio.h>
#include <math.h>

float converteFahrenheit (float a) {
    float mult;
    mult = 9.0/5 *a;
    return mult+32;
}

float converteKelvin (float b) {
    return b + 273.5;
    
    
}

int main() {
  
    float Celsius;
    
    printf("Qual temperatura deseja converter?\n");
    scanf("%f", &Celsius);
    
    printf(" A temperatura em Fahrenheit é %.1f, e em Kelvin é %.1f", converteFahrenheit(Celsius) , converteKelvin(Celsius));
    return 0;
}

