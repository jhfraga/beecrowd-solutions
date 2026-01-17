// 2172 - Evento - beecrowd

#include <stdio.h>

int main(void)
{
    int x;
    unsigned int m;

    while (scanf("%d %u", &x, &m) != EOF)
    {
        if (x == 0 && m == 0) break;
        printf("%u\n", (x * m));
    }

    return 0;
}
