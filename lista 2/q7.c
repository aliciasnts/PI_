#include <stdio.h>
#include <math.h>

  void montante (float c, float t, float m, float *rendimento,  float *montanteFinal) { 
    *rendimento = (m*t);
    *montanteFinal = c + *rendimento;
} //um void não retorna nada

int main() {

   float capital;
   float mensal;
   float tempo;
   float rendimento1;
   float montante1;
   
    printf("Qual foi o capital incial?\n");
    scanf("%f", &capital);
    
    printf("Qual era o investimento mensal?\n");
    scanf("%f" , &mensal);
    
    printf("Quanto tempo ficou investido?\n");
    scanf("%f" , &tempo);
    
    montante(capital, tempo, mensal, &rendimento1, &montante1); //to chamando a função e dizendo aos ponteiros onde armazenar a informação que eu mandei eles formarem no void
    
    printf("O montante final é de R$:%f \n E o rendimento foi de R$: %f \n" , montante1, rendimento1 ); 
    
    return 0;
}
