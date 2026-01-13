// 2455 - Gangorra - beecrowd

#include <stdio.h>

int main(void)
{
    int P1, C1, P2, C2;
    scanf("%d %d %d %d", &P1, &C1, &P2, &C2);

    int resultado = P1 * C1 - P2 * C2;

    if (resultado == 0) {
        printf("0\n");
    } else {
        printf("%d\n", (resultado < 0) ? 1 : -1);
    }

    return 0;
}
