#include <stdio.h>

// Valor de w após a execução do trecho:
// ​y=5; e z=11;  
// ​w=y+z; resulta em w = 16.  
// ​A condição do if (y>z) testa se 5 > 11, o que é Falso.  
// ​Portanto, o bloco do if é ignorado.
// A saída será: 16. 

int main()
{
    int y = 5;
    int z = 11;
    int w;
    w = y + z;
    if (y > z)
    {
        w = y * z;
    }
    printf("%d", w);
    return 0;
}