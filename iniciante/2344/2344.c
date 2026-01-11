// 2344 - Notas da Prova - beecrowd

#include <stdio.h>

void calc(int N)
{
    char conceito[] = {'D', 'C', 'B', 'A'};
    int     notas[] = {35, 60, 85, 100};

    int i;

    if (N == 0) printf("E\n");
    else {
        for (i = 0; i < sizeof(notas)/sizeof(int); i++)
        {
            if (N <= notas[i]) {
                printf("%c\n", conceito[i]);
                break;
            }
        }
    }
}

int main(void)
{
    int n; scanf("%d", &n);

    calc(n);

    return 0;
}
