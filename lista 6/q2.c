/*Na loja de Sr. Zé compras acima de R$300,00 podem ser parceladas em
até 10 vezes, para tanto são aplicados juros simples de 10% ao mês,
conforme o número de meses. Dado valor da compra, exibir o valor total
e o valor das parcelas. Aplicar for e função.

Exemplo:
Compra R$1.000,00
Pagamento em 1 mês – Juros: R$100,00 – Total: R$1.100 – Parcela1 x R$ 1.100,00
Pagamento em 2 meses – Juros: R$100,00 – Total – R$1.200 – Parcela 2 x R$600,00
Pagamento em 3 meses – Juros: R$100,00 – Total – R$1.300 – Parcela 3 x R$433,33
Pagamento em 4 meses – Juros: R$100,00 –Total – R$1.400 – Parcela 4 x R$350,33
...
Pagamento em 10 meses – Juros: R$100,00 –Total – R$2.000 – Parcela 10 x R$200,00*/

#include <stdio.h>
#include <math.h>

float calcularJuros(float valor){
    return valor/100;}
    
float total (float valor, int mes) {
    return (valor/100)+valor;}
    
float parcela(float valor, int mes) {
    return (((valor/100)+valor)/mes);}

int main() {
    
    float valorCompra, totalCompra;
    int meses;
    
    printf("Qual o valor da sua compra?\n");
    scanf("%f" , &valorCompra);
    
    if (valorCompra<300) {
        printf("Parcelamento unico de %.2f", valorCompra);
    }
    else {
    printf("Opções de parcelamento:\n\n");
    
     for (meses=1; meses <=10; meses++) {
         printf("Pagamento em %d meses – Juros: R$ %.2f –Total – %.2f – Parcela %d x R$%.2f\n\n", meses, calcularJuros(valorCompra), total(valorCompra, meses) , meses, parcela(valorCompra, meses) );}}
         
         return 0;
       }
