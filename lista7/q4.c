/*Escrever programa para ler o nome de uma pessoa,
composto por nome e sobrenome (entre nome e
sobrenome há um espaço em branco). E exibir,
sobrenome em maiúsculo, seguido de vírgula e do nome
da pessoa. Efetuar essa operação para tantas entradas quantas
o usuário desejar.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>


char* separarNome (char str[]){
    char palavra [21];
    for (int i = 0 ; ; i++){
    palavra[i] = str [i];

    if (str[i] == ' '){
        palavra[i] = '\0';
        strcpy(str,palavra);
        return str;}}}


void formataNome(char nome[]) {
    nome[0] = toupper(nome[0]); // Transforma a primeira letra do nome em maiúscula
    
     for (int i = 1; nome[i] != '\0'; i++) {
        nome[i] = tolower(nome[i]);}} // Transforma as letras restantes do nome em minúsculas
   


int main() {
    
    char continuar; 
    char nome [21];
    char sobrenome [21];

    do {
        printf("Digite o nome completo (nome sobrenome):");
        scanf("%[^\n]",nome); 

        int posicao = -1;
        for (int i = 0; nome[i] != '\0'; i++) {
            if (nome[i] == ' ') {
                posicao = i;
                break;}}

        if (posicao == -1) {
            printf("Formato inválido. Por favor, insira nome e sobrenome separados por um espaço.\n");
            continue;}

      //seleciona o sobrenome
      strcpy(sobrenome, &nome[posicao + 1]);

      // sobrenome pra maiuscula
      for(int i = 0; sobrenome[i] != '\0'; i++) {
          sobrenome[i] = toupper(sobrenome[i]);}
          
      formataNome(nome);
      separarNome(nome);

        // exibição das funções
        printf("%s, %s\n", sobrenome, nome);

        // continuação
        printf("Deseja verificar outro nome?\ns = Sim\nn = Não\n");
        scanf(" %c", &continuar);
        getchar();
    } while(continuar == 's' || continuar == 'S');
    return 0;}
