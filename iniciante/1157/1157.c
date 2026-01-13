// 1157 - Divisores I - beecrowd

#include <stdio.h>

int main(void)
{
    int n; scanf("%d", &n);
    int i;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0) printf("%d\n", i);
    }

    return 0;
}
