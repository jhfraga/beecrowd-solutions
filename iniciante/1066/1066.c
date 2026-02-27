// 1066 - Pares, Impares, Positivos, Negativos - beecrowd

#include <stdio.h>

int main(void) 
{
    int x[5];
    int e = 0, o = 0, p = 0, n = 0;

    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++) 
    {
        scanf("%d", &x[i]);

        (x[i] % 2 == 0) ? e++ : o++;
        if (x[i] != 0) (x[i] > 0) ? p++ : n++;
    }

    printf("%d valor(es) par(es)\n", e);
    printf("%d valor(es) impar(es)\n", o);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", n);

    return 0;
}
