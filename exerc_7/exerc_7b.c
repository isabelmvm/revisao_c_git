#include <stdio.h>
#include <stdlib.h>

// Estrutura de exemplo para salvar no arquivo
typedef struct {
    int id;
    char nome[50];
    float nota;
} Aluno;

int main() {
    FILE *arquivo_bin;
    Aluno aluno_gravar = {1, "Maria Silva", 9.5};
    Aluno aluno_lido;

    // Modo 'w+b': w+ (leitura e escrita, recria o arquivo) e b (binário)
    // r+b também poderia ser usado se o arquivo já existisse.
    arquivo_bin = fopen("dados.bin", "w+b");
    if (arquivo_bin == NULL) {
        printf("Erro ao criar arquivo binário.\n");
        return 1;
    }

    // fwrite: Escreve o bloco de memória da struct direto no arquivo
    // Argumentos: ponteiro dos dados, tamanho do bloco, quantidade, ponteiro do arquivo
    fwrite(&aluno_gravar, sizeof(Aluno), 1, arquivo_bin);
    printf("Dados binarios gravados com sucesso.\n");

    // Como acabamos de escrever, o "cursor" do arquivo está no final.
    // Usamos rewind() para voltar o cursor para o início antes de ler.
    rewind(arquivo_bin);

    // fread: Lê o bloco de dados brutos e preenche a variável
    // Retorna a quantidade de blocos lidos com sucesso
    if (fread(&aluno_lido, sizeof(Aluno), 1, arquivo_bin) == 1) {
        printf("\n--- Dados Lidos do Arquivo Binario ---\n");
        printf("ID: %d\n", aluno_lido.id);
        printf("Nome: %s\n", aluno_lido.nome);
        printf("Nota: %.1f\n", aluno_lido.nota);
    }

    fclose(arquivo_bin);

    return 0;
}