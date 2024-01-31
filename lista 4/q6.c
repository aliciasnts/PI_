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
  
    if (notaPort >= 0.8 * 50 && notaMat >= 0.6 * 35 && notaReda >= 7) {
    aprovados++;}
    
    printf("%.0f candidato(s) foram aprovados" , aprovados);
    return 0 ;
}};
