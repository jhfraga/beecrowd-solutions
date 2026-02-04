// 1060 - Numeros Positivos - beecrowd

#include <stdio.h>

int main(void)
{
    float num[6];
    int i, cont = 0;

    for (i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
        scanf("%f", &num[i]);
        if (num[i] > 0) cont++;
    }

    printf("%d valores positivos\n", cont);

    return 0;
}
