#include <stdio.h>

int main(){
    
	float Meta, Doacao, Soma = 0;
	
	printf("Meta da vaquinha: ");
	scanf("%f",&Meta);

	do {
	  printf("Valor da doacao: ");
	  scanf("%f",&Doacao);
	  Soma = Soma + Doacao;
	  printf("Valor parcial: %.2f \n" , Soma);
	}
	while (Soma<Meta);
	
	if (Soma==Meta) {
	    printf("A meta da vaquinha foi alcancada!");
        return 0;}
    
    else {
        printf("A meta foi ultrapassada!\n");
        printf("Valor atual: %.2f" , Soma);
}

}
