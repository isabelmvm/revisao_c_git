#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t; // Conforme definido na questão[span_16](start_span)[span_16](end_span)

int main() {
    // Carregando dinamicamente (via malloc)[span_17](start_span)[span_17](end_span)
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));
    if (aluno == NULL) return 1;

    printf("Nome do aluno: ");
    scanf(" %99[^\n]", aluno->nome);
    printf("Faltas e Nota: ");
    scanf("%d %f", &aluno->faltas, &aluno->nota);

    // Exibindo em um printf[span_18](start_span)[span_18](end_span)
    printf("\n--- Dados ---\nNome: %s\nFaltas: %d\nNota: %.2f\n", aluno->nome, aluno->faltas, aluno->nota);
    
    // Apresentando se foi aprovado[span_19](start_span)[span_19](end_span)
    // Assumindo limite genérico de 25 faltas para aprovação
    if (aluno->nota >= 7.0 && aluno->faltas <= 25) {
        printf("Status: Aprovado\n");
    } else {
        printf("Status: Reprovado\n");
    }

    free(aluno);
    return 0;
}