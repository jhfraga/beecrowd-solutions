// 1074 - Par ou Impar - beecrowd

#include <stdio.h>

int main(void)
{
    int N; scanf("%d", &N);
    int X;
    int i;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &X);

        if (X == 0) printf("NULL\n");
        else
        {
            printf("%s %s\n", 
                (X % 2 == 0) ? "EVEN" : "ODD", 
                (X == 0) ? "NULL" : (X > 0) ? "POSITIVE" : "NEGATIVE");
        }
    }

    return 0;
}
