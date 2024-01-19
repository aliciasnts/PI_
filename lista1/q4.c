#include <stdio.h>

int main()
{
    
    float reaisUsuario;
    float dollarCambio;
    
    printf("valor em reais");
    scanf("%f", &reaisUsuario);
    
    float dollarValorAtual = 4.90;
    
    dollarCambio = (reaisUsuario*dollarValorAtual);
    
    printf(("O valor em dollar e %f") , dollarCambio);

    return 0;
}
