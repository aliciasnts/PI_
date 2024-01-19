#include <stdio.h>

int main() {
  
    int numeroUsuario;
    

    printf("de qual numero quer saber a tabuada?");
    scanf("%d", &numeroUsuario);
    
    for( int a = 0; a <=10; a++) {
    printf("%d\n",  a*numeroUsuario );
}    
    return 0;
}

