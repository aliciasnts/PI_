#include <stdio.h>

int main() {
  
    int numeroUsuario;
    
    printf("de qual numero quer saber a tabuada?");
    scanf("%d", &numeroUsuario);
    
    printf("%d X 0 = %d\n", numeroUsuario , numeroUsuario *0);
    printf("%d X 1 = %d\n", numeroUsuario , numeroUsuario *1);
    printf("%d X 2 = %d\n", numeroUsuario , numeroUsuario *2);
    printf("%d X 3 = %d\n", numeroUsuario , numeroUsuario *3);
    printf("%d X 4 = %d\n", numeroUsuario , numeroUsuario *4);
    printf("%d X 5 = %d\n", numeroUsuario, numeroUsuario *5);
    printf("%d X 6 = %d\n", numeroUsuario, numeroUsuario *6);
    printf("%d X 7 = %d\n", numeroUsuario , numeroUsuario *7);
    printf("%d X 8 = %d\n", numeroUsuario , numeroUsuario *8);
    printf("%d X 9 = %d\n", numeroUsuario , numeroUsuario *9);
    printf("%d X 10 = %d\n", numeroUsuario , numeroUsuario *10);
    
    
/*    for( int a = 0; a <=10; a++) {
    printf("%d\n",  a*numeroUsuario );
    }*/
    return 0;
}
