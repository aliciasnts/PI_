#include <stdio.h>

int main()
{
    
    int pesoAtual;
    int pesoIdeal;
    int perdaMensal;
    int resultado;

    printf("quanto voce pesa?");
    scanf("%d", &pesoAtual);
    printf ("quanto voce quer pesar?");
    scanf("%d", &pesoIdeal);
    printf("quantos kg quer perder por mes?");
    scanf("%d", &perdaMensal);
    
    resultado = ((pesoAtual - pesoIdeal)/perdaMensal);
    printf("Voce devera alcancar seu objetivo em %d meses! " , resultado); 

    return 0;
}
