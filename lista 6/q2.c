/* Escrever programa para ler um nome e, independente
de como este foi escrito, exibir a inicial maiúscula e o
restante minúscula. Sendo:
● Cadeia[P] = toupper(Cadeia[P]);
Converte a letra da posição P da string
Cadeia para maiúscula, da biblioteca
ctype.h.
● Cadeia[P] = tolower(Cadeia[P]);
Converte a letra da posição P da string
Cadeia para minúscula, da biblioteca
ctype.h. */

#include <stdio.h>
#include <ctype.h>

int main () {
    char palavraUsuario[21];
  
    printf ("Insira uma palavra:\n");
    scanf ("%20s",palavraUsuario);
  
palavraUsuario[0] = toupper(palavraUsuario[0]);

    for (int i = 1 ; palavraUsuario[i] !='\0'; i++) 
  
    palavraUsuario[i] = tolower(palavraUsuario[i]);
    
  
    printf ("Palavra editada:: %s\n" , palavraUsuario);
  
}
