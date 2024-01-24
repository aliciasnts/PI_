/*Escrever um programa para ler peso (massa) e altura de uma pessoa, calcular o 
indice de massa corporal - IMC (massa/altura^2) e determinar o tipo de 
obesidade da pessoa conforme a tabela da OMS

< 18,5 - magreza
entre 18,5 E 24,9 - normal
entre 25,0 E 29,9 - obesidade grau 1
entre 30,0 E 39,9 - obesidade grau 2
> 40,0 - obesidade grave (obesidade grau 3)
.
*/

#include <stdio.h>
#include <math.h>

float calcIMC (float a , float b) {
    float potencia;
    potencia = pow(b,2);
    return a/potencia;
}

int main() {
    
    float peso;
    float altura;
    
    printf("Qual o seu peso em kg?\n");
    scanf("%f", &peso);
    
    printf("Qual a sua altura? \n");
    scanf("%f", &altura);
   
   float IMC = calcIMC(peso, altura);
   
  if (IMC<18.5) {
      printf("magreza");
  }
  else if (IMC < 24.9)  {
      printf("normal");
  }
  else if (IMC < 29.9) {
      printf("obesidade grau 1");
  }
  else if (IMC < 39.9)  {
      printf("obesidade grau 2");
  }
  else  {
      printf("obesidade grau 3 / obesidade morbida");
  }
  
  return 0;
}

