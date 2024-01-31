#include <stdio.h>

void analisePH (float pH) {
  
    if (pH < 7) {
        printf("\nACIDA"); } 
        
    else if (pH > 7) {
    printf("\nBASICA");} 
    
    else {
    printf("\nNEUTRA");} 
    
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
