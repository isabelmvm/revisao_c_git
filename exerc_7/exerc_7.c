// ​a) Modos de abertura: r (somente leitura), w (escrita, recria o arquivo), a (anexar, escreve no fim do arquivo), e variações com + (como r+, w+, a+) que permitem leitura e escrita simultâneas. Adiciona-se b para arquivos binários (ex: rb, wb).
// ​b) Funções:
// ​fgets: Lê uma string (linha) de um arquivo de texto.
// ​fprintf: Escreve dados formatados em um arquivo de texto.
// ​fread: Lê blocos de dados brutos (binários) de um arquivo.
// ​fwrite: Escreve blocos de dados brutos (binários) em um arquivo.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char linha[100];

    // 1. Modo 'w': Cria o arquivo (ou sobrescreve se já existir) para escrita
    arquivo = fopen("exemplo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para escrita.\n");
        return 1;
    }
    // fprintf: Escreve dados formatados
    fprintf(arquivo, "Primeira linha do arquivo.\n");
    fprintf(arquivo, "Numero gravado: %d\n", 42);
    fclose(arquivo); 

    // 2. Modo 'a': Abre o arquivo para anexar (escrever no fim)
    arquivo = fopen("exemplo.txt", "a");
    if (arquivo == NULL) return 1;
    
    fprintf(arquivo, "Nova linha anexada ao final.\n");
    fclose(arquivo);

    // 3. Modo 'r': Abre o arquivo somente para leitura
    arquivo = fopen("exemplo.txt", "r");
    if (arquivo == NULL) return 1;

    printf("--- Conteudo do Arquivo de Texto ---\n");
    
    // fgets: Lê uma string (linha) até encontrar '\n' ou atingir o limite
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);

    return 0;
}