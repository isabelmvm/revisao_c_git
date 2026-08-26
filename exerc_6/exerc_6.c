#include <stdio.h> 
// a) Saída do programa: O while imprimirá de while: 0 até while: 9. Quando o bloco terminar, i valerá 10. 
// O bloco do..while será executado uma vez, imprimindo do: 10 e incrementando i para 11. Como 11 < 10 é falso, o loop é encerrado.  
// ​b) Diferença while vs do..while: O while verifica a condição antes de executar o bloco de código. 
// O do..while executa o bloco primeiro, e só depois verifica a condição, garantindo que o código rode pelo menos uma vez.  
// ​d) Diferença while e for: O while é ideal quando o número de iterações é desconhecido. 
// O for é recomendado quando se sabe a quantidade de iterações, pois agrupa a inicialização, a condição e o incremento na mesma linha.

int main()
{
    int i;

    i = 0;

    // while verifica primeiro, depois executa
    while (i < 10)
    {
        printf("while: %d\n", i);
        i++;
    }

    // do executa, depois verifica
    do
    {
        printf("do:%d\n", i);
        i++;
    } while (i < 10);

    return 0;
}
