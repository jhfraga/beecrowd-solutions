// 1143 - Quadrado e ao Cubo - beecrowd

#include <stdio.h>
#include <math.h>

void calc(int N)
{
    int i;

    for (i = 1; i <= N; i++) 
        printf("%d %d %d\n", i, (int)pow(i, 2), (int)pow(i, 3));
}

int main(void)
{
    int n; scanf("%d", &n);

    calc(n);

    return 0;
}
