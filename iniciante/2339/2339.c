// 2339 - Avioes de Papel - beecrowd

#include <stdio.h>

int main(void)
{
    int c, p, f; scanf("%d %d %d", &c, &p, &f);

    printf("%c\n", ((p - c * f) < 0) ? 'N' : 'S'); 

    return 0;
}
