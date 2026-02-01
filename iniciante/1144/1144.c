// 1144 - Sequencia Logica - beecrowd

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int i;

    for (i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", i, (i * i), (i * i * i));
        printf("%d %d %d\n", i, (i * i) + 1, (i * i * i) + 1);
    }

    return 0;
}
