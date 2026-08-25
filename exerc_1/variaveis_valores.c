# include <stdio.h> 

 int main(){ 
    int a= 1, b=2, c =3,d=4, e=5; 

    printf("a* b/ c = %.3f\n",(float)a*b/ c); 

    printf("a* b%% c+1 = %d\n",a *b%c+ 1); 

    printf("++a *b- c-- = %d\n",++a*b-c--); 

    // printf("7--b *++d=%d\n", 7--b*++d); Dessa forma como está no pdf gera erro
    printf("7--b *++d = %d\n", 7-(-b)*++d); 

    printf("a/ b/ c = %.3f\n",(float)a/b/ c); 

    printf("7+ c*--d/e = %.3f\n",7 +c*--d/ (float)e); 

    printf("2* a%%-b+c+ 1 = %d\n",2*a %-b+ c+1); 

    printf("39/-++e- +29%%c = %.3f\n", 39.0 /-++e-+ 29%c); 
    
    printf("7- +++a %% (3+b) = %d\n",7-+ ++a%(3+b)); 

    return 0;  
}
// Linha 1 (0.667): O operador de cast (float)a transforma temporariamente o valor de a em 1.0. A operação passa a usar aritmética de ponto flutuante: 1.0 * 2 = 2.0, e 2.0 / 3 = 0.6666..., que arredondado para 3 casas decimais resulta em 0.667
// Linha 2 (3): Multiplicação e resto possuem a mesma precedência e resolvem-se da esquerda para a direita. 1 * 2 = 2. O resto de 2 % 3 é 2. Por fim, soma-se 1, resultando em 3
// Linha 3 (1): O pré-incremento ++a aumenta a para 2 antes de avaliar a linha. O pós-decremento c-- usa o valor atual de c (3) na conta e só diminui para 2 após a linha terminar. A expressão resolvida é (2 * 2) - 3 = 1
// Linha 4 (17): O pré-incremento ++d muda d de 4 para 5. A expressão corrigida é 7 - (-b) * d. Substituindo os valores: 7 - (-2) * 5. Multiplicação primeiro: (-2) * 5 = -10. Subtração final: 7 - (-10) = 7 + 10 = 17
// Linha 5 (0.500): Com os valores atuais a=2, b=2, c=2, o cast faz a virar 2.0. Resolvendo da esquerda para a direita: 2.0 / 2 = 1.0. Depois, 1.0 / 2 = 0.5
// Linha 6 (8.600): O pré-decremento --d reduz d de 5 para 4. A multiplicação e divisão acontecem antes da soma. Como e recebeu o cast para float, a divisão preserva os decimais: 2 * 4 = 8 \(\rightarrow \) 8 / 5.0 = 1.6. Somando ao inteiro: 7 + 1.6 = 8.6
// Linha 7 (3): Multiplicação e resto primeiro: 2 * 2 = 4. Na linguagem C, o resto de 4 % -2 é 0 (o sinal do divisor não afeta o resultado nulo). A conta finaliza com 0 + 2 + 1 = 3
// Linha 8 (-7.500): O operador -++e incrementa e para 6 e aplica o sinal negativo (-6). A primeira parte gera 39.0 / -6 = -6.5. A segunda parte calcula o resto: 29 % 2 = 1. O sinal de menos entre eles faz: -6.5 - 1 = -7.5
// Linha 9 (4): O operador +++a equivale a +(++a). Ele incrementa a de 2 para 3. Dentro dos parênteses temos 3 + 2 = 5. O resto da divisão de 3 % 5 é 3. A expressão final fica 7 - 3 = 4.