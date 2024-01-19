#include <stdio.h>

int main()
{
    
    int primeiraDose;
    int periodicidade;
    int segundaDose;
    int terceiraDose;
    int quartaDose;

    printf("Quando foi tomada a primeira dose?");
    scanf("%d", &primeiraDose);
    printf ("Qual a periodicidade da vacina?");
    scanf("%d", &periodicidade);
    
    segundaDose = primeiraDose + periodicidade;
    terceiraDose = segundaDose+ periodicidade;
    quartaDose = terceiraDose +periodicidade;
    
    printf("As proximas datas de vacinacao serao %d  %d  %d" , segundaDose , terceiraDose, quartaDose);

    return 0;
}
