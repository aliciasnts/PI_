#include <stdio.h>

void ValidaCompra (float *L, int numeroCompra) {
    float D;
    
    printf("Débito %d: ", numeroCompra);
    scanf("%f",&D);
    
    if (*L - D >= 0){
        printf("Compra %d possível! \n", numeroCompra);
        *L = *L - D;
        printf("Limite atual: %.2f\n", *L);
    }
    
    else {
        printf("A compra estourará o cartão! \n");
        printf("Limite restante: %.2f \n\n",*L);
        
    }

}


int main(){

    float Limite;
    int numeroCompra = 1;
    
    printf("Limite do cartão: ");
    scanf("%f",&Limite);
    
    while (Limite>0) {
    ValidaCompra(&Limite, numeroCompra);
    numeroCompra++;
    
        
    }
    
    printf("Seu limite de compras acabou!");
    
return 0;}
