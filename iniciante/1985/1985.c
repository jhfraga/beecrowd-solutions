// 1985 - MacPRONALTS - beecrowd

#include <stdio.h>

int main(void)
{
    double precos[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int p, c, q;
    double tc = 0;

    scanf("%d", &p);

    for (int i = 0; i < p; i++) {
        scanf("%d %d", &c, &q);
        tc += precos[c - 1001] * q;
    }

    printf("%.2lf\n", tc);
    return 0;
}
