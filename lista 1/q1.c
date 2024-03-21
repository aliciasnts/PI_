#include <stdio.h>

int main()
{
    
    int numeroOriginal;

    printf("Digite um número!");
    scanf("%d", &numeroOriginal);
    printf("O número antecessor é %d\n", numeroOriginal - 1);
    printf("O número sucessor é %d", numeroOriginal + 1);

    return 0;
} 

ou

#include <stdio.h>

int main()
{
    
    int numeroOriginal;

    printf("Digite um numero!");
    scanf("%d", &numeroOriginal);
    printf("%d %d", numeroOriginal - 1 , numeroOriginal +1); 

    return 0;
}
