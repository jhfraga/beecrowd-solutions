// 1099 - Soma de Impares Consecutivos II - beecrowd

#include <stdio.h>

int main(void)
{
    int N; scanf("%d", &N); // qtd de casos de teste

    for (int i = 0; i < N; i++) {
        int sum = 0;
        int X, Y; scanf("%d %d", &X, &Y);

        if (X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }

        for (int K = X + 1; K < Y; K++) {
            if (K % 2 != 0) sum += K;
        }

        printf("%d\n", sum);
    }

    return 0;
}
