#include <stdio.h>

int main() {
  
  float notaPort, notaMat, notaReda, aprovados;
  char continuar;
  
do {
    printf("Digite a sua nota na prova de português:");
    scanf("%f" , &notaPort); 
    
    if (notaPort <= 0) {break;}
    
    printf("Digite a sua nota na prova de matemática:");
    scanf("%f" , &notaMat);
    
    printf("Digite a sua nota na prova de redação:");
    scanf("%f" , &notaReda);
  
    if (notaPort> 50 && notaMat>35 && notaReda>10) {
        printf("Erro: valores não correspondentes com a prova, tente novamente.\n\n");
    }
    
    else {
       if (notaPort >= 0.8 * 50 && notaMat >= 0.6 * 35 && notaReda >= 7) {
    aprovados++;}
    }

    printf("Deseja checar outro candidato?\n s - sim\n n - não\n");
    scanf(" %c" , &continuar);
    
}
while ( continuar == 's' || continuar == 'S');
printf("%.0f candidato(s) foram aprovados" , aprovados);
    return 0 ;
}

