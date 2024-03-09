/*Escrever programa para ler uma palavra P qualquer
com até 20 caracteres e identificar quantas vogais P
apresenta. Aplicar função definida pelo programador
Efetuar essa operação para tantas strings quantas o usuário
desejar.*/
/*Escrever programa para ler uma palavra P qualquer
com até 20 caracteres e identificar quantas vogais P
apresenta. Aplicar função definida pelo programador
Efetuar essa operação para tantas strings quantas o usuário
desejar.*/

int contarV(char palavra[]) {
    int vogais = 0;
   
    for(int i = 0; palavra[i] != '\0'; i++) {
        char caractere = tolower(palavra[i]);
      
        if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') 
            vogais++;}
    
    return vogais;}


int main() {
    char palavra[21]; 
    char continuar; 

    do {
        printf("Digite uma palavra com até 20 caracteres: ");
        scanf("%20s", palavra); 

        int numVogais = contarV(palavra);

        printf("'%s' : %d vogais\n", palavra, numVogais);

        printf("Deseja verificar outra palavra?\ns = Sim\nn = Não\n");
        scanf(" %c", &continuar);
    } while(continuar == 's' || continuar == 'S');

    return 0;}
