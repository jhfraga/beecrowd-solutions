// 2388 - Tacografo - beecrowd

#include <stdio.h>

void calc(int N) 
{
    int t, v, s = 0;
 
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &t, &v);
        s += t * v;
    }

    printf("%d\n", s);
}

int main(void)
{
    int n; scanf("%d", &n);
    
    calc(n);

    return 0;
}
