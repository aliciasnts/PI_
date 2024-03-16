/*Implementar programa para ler total de vendas, de um
  determinado mês, dos 300 vendedores da “Matura”,
  calcular a média de vendas do grupo de vendedores, e
  exibir quantos vendedores apresentaram desempenho
  (vendas) abaixo da média. */
  
#include <stdio.h>

int main() {
    int numeroVendedores = 300;
    int vendas[numeroVendedores];
    int totalVendas = 0;

    // Ler as vendas de cada vendedor
    printf("Qual o total de vendas de cada vendedor da Matura?\n");
    
    for (int i = 0; i < numeroVendedores; i++) {
        printf("Vendedor %d: ", i + 1);
        scanf("%d", &vendas[i]);
        totalVendas += vendas[i];
    }

    // Calcular a média de vendas
    float mediaVendas = (float)totalVendas numeroVendedores;

    // Contar quantos vendedores tiveram vendas abaixo da média
    int abaixoMedia = 0;
    
    for (int i = 0; i < numeroVendedores; i++) {
        if (vendas[i] < mediaVendas) {
            abaixoMedia++;}
    }

    // Exibir os resultados
    printf("\nMédia de vendas do grupo de vendedores em análise: %.2f\n", mediaVendas);
    printf("Número de vendedores com vendas abaixo da média: %d\n", abaixoMedia);

    return 0;
}
