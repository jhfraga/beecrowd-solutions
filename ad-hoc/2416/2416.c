// 2416 - Corrida - beecrowd

#include <stdio.h>

int main(void)
{
    int C, N;
    scanf("%d %d", &C, &N);

    int ponto_termino = C % N;

    printf("%d\n", ponto_termino);

    return 0;
}
