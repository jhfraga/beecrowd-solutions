// 1064 - Positivos e Media - beecrowd

#include <stdio.h>

int main(void)
{
    float m = 0.0;
    float n = 0.0;
    int cont = 0;

    for (int i = 0; i < 6; i++) {
        scanf("%f", &n);

        if (n > 0) {
            m += n;
            cont++;
        }
    }

    printf("%d valores positivos\n", cont);
    printf("%.1f\n", (m / (float)cont));

    return 0;
}
