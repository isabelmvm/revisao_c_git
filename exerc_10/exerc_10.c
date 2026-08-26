#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox; // Corrigido para ponteiro
} aluno_t; 

int main() {
    aluno_t *aluno_root = NULL; // Raiz inicializada
    
    // Alocando o primeiro elemento
    aluno_root = (aluno_t *)malloc(sizeof(aluno_t));
    
    printf("Nome, Faltas e Nota: ");
    scanf(" %99[^\n] %d %f", aluno_root->nome, &aluno_root->faltas, &aluno_root->nota);
    aluno_root->prox = NULL; // O último aponta para NULL

    // Exibição e verificação
    printf("\nAluno: %s | Nota: %.2f | Faltas: %d\n", aluno_root->nome, aluno_root->nota, aluno_root->faltas);
    if(aluno_root->nota >= 7.0) printf("Status: Aprovado\n");
    else printf("Status: Reprovado\n");

    free(aluno_root);
    return 0;
}