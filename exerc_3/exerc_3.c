#include <stdio.h>

// A saída depende estritamente dos valores inteiros digitados pelo usuário no scanf
// Se a > b ou a <= 0, a variável c recebe o resultado da divisão inteira de b por a
// Caso contrário, c recebe o resultado da divisão inteira de a por b
// A saída final exibirá o valor de c fixado com duas casas decimais (%.2f)
// Se o usuário digitar 5 e 11, o programa entrará no else, calculará 5 / 11 (que resulta no inteiro 0) e exibirá 0.00

int main()

{
    int a = 5;
    int b = 11;
    float c;

    scanf("%d %d", &a, &b);

    if (a > b || !(a > 0))
    
    {
        c = (float)(b / a);
    }
    else
    {
        c = (float)(a / b);
    }
    printf("%.2f\n", c);
    return 0;
}