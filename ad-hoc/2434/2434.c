// 2434 - Saldo do Vovo - beecrowd

#include <stdio.h>

int main() {
    int N, S;
    int movimentacao;
    int menor_saldo;

    scanf("%d %d", &N, &S);

    menor_saldo = S;

    for (int i = 0; i < N; i++) {
        scanf("%d", &movimentacao);
        S = S + movimentacao;

        if (S < menor_saldo) {
            menor_saldo = S;
        }
    }
    printf("%d\n", menor_saldo);
    
    return 0;
}