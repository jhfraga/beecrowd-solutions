// 1065 - Pares entre Cinco Numeros - beecrowd

#include <stdio.h>

int main(void)
{
    int x[5];
    int p = 0;

    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++)
    {
        scanf("%d", &x[i]);

        if (x[i] % 2 == 0) p++;
    }

    printf("%d valores pares\n", p);

    return 0;
}
