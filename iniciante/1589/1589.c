// 1589 - Bob Conduite - beecrowd

#include <stdio.h>

int main(void)
{
    int t; scanf("%d", &t);
    int t1, t2;
    int i;

    for (i = 0; i < t; i++)
    {
        scanf("%d %d", &t1, &t2);
        printf("%d\n", (t1 + t2));
    }
    
    return 0;
}
