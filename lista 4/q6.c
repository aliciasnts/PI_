#include <stdio.h>



int main() {
  
  float notaPort, notaMat, notaReda, aprovados;
  
  while (1) {
    printf("Digite a sua nota na prova de português:");
    scanf("%f" , &notaPort); 
    
    if (notaPort <= 0) {break;}
    
    printf("Digite a sua nota na prova de matemática:");
    scanf("%f" , &notaMat);
    
    printf("Digite a sua nota na prova de redação:");
    scanf("%f" , &notaReda);
  
    if (acertos_portugues >= 0.8 * 50 && acertos_matematica >= 0.6 * 35 && nota_redacao >= 7) {
    candidatos_aprovados++;
    
  }

