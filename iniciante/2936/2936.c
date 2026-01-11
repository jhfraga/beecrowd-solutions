// 2936 - Quanta Mandioca - beecrowd

#include <stdio.h>

void calc(void)
{
    int q[] = {300, 1500, 600, 1000, 150};
    int t = 225;

    int p, i;

    for (i = 0; i < sizeof(q)/sizeof(q[0]); i++)
    {
        scanf("%d", &p);
        t += p * q[i];
    }
    printf("%d\n", t);
}

int main(void)
{
    calc();
    return 0;
}
