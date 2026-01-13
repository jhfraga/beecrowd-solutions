// 2791 - Feijao - beecrowd

#include <stdio.h>

int main(void)
{  
    int c[4]; 
    int r = 0;
    int i;

    for (i = 0; i < 4; i++) 
    {
        scanf("%d", &c[i]);
        if (c[i] == 1) r = i + 1;
    }

    printf("%d\n", r);

    return 0;
}
