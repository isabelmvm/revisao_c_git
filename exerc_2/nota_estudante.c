#include <stdio.h>

int main() {
    float nota, frequencia;
    
    printf("Digite a nota e a frequencia (em %%): ");
    scanf("%f %f", &nota, &frequencia);
    
    // Validação com um único if
    if (nota >= 7.0 && frequencia >= 75.0) {
        printf("Estudante Aprovado!\n");
    } else {
        printf("Estudante Reprovado.\n");
    }
    
    return 0;
}