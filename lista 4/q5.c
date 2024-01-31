#include <stdio.h>

void analisePH (float pH) {
  
    if (pH < 7) {
        printf("ACIDA \n"); } 
        
    else if (pH > 7) {
    printf("BASICA\n");} 
    
    else {
    printf("NEUTRA\n");} 
    
}

int main() {
  
  printf("Cole a lista dos PH de todas as substâncias que deseja analizar, digitando -1 no final da lista para parara a execução do programa.\n");
  
    float entrada;

 while (1) {
   scanf("%f", &entrada);
    if (entrada == -1) {break;}
 
 analisePH(entrada);
    }

return 0;
}
