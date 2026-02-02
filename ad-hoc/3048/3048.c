#include <stdio.h>

int main() 
{
    int N;
    int valor_atual;
    int contador = 0;
    int procurado = 1;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &valor_atual);

        if (valor_atual == procurado) {
            contador++;
            
            if (procurado == 1) {
                procurado = 2;
            } else {
                procurado = 1;
            }
        }
    }

    printf("%d\n", contador);

    return 0;
}