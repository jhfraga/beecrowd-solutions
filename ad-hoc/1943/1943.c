// 1943 - Top N - beecrowd

#include <stdio.h>

int main(void)
{
    // armazenamos as colocacoes em um vetor de inteiros
    int c[] = {1, 3, 5, 10, 25, 50, 100};
    int K;

    // realiza a leitura da posicao alcancada pelo competidor
    scanf("%d", &K);

    /* determinamos o tamanho do loop dinancimamente
       - sizeof(c) da o tamanho total do vetor em bytes
       - sizeof(c[0]) da o tamanho de um unico elemento (int)
       - a divisao resulta na quantidade total de elementos no vetor
    */
    for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++) {
        // se K for menor ou igual a colocacao na posicao 'i', entao
        if (K <= c[i]) {
            printf("Top %d\n", c[i]); // apresenta o colocacao
            break; // encontrou a menor categoria, sai do loop
        }
    }

    return 0;
}
