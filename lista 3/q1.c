#include <stdio.h>

float aumentoSalario (float a) {
    if (a>850) {
        printf("Aumento não disponivel");
        return 0; }
    else {
        printf("seu novo salário é %.2f\n", a*(1.5));
        return;}
}
int main() {
  
    int salarioUsuario;
    
    printf("Qual o seu salário?");
    scanf("%d", &salarioUsuario);
    
    return aumentoSalario(salarioUsuario);

}
