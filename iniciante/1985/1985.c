// 1985 - MacPRONALTS - beecrowd

#include <stdio.h>

double calc(int cod, int qtd)
{
    double precos[] = {1.5, 2.5, 3.5, 4.5, 5.5};
    int codigos[] = {1001, 1002, 1003, 1004, 1005};
    double tp = 0; // total pedido
    int i; // index

    for (i = 0; i < sizeof(codigos) / sizeof(codigos[0]); i++) {
        if (cod == codigos[i]) tp += precos[i] * qtd;
    }

    return tp;
}

int main(void) {
    double tc = 0; // total compra
    int i; // index
    int c, q; // codigo, quantidade

    // pedidos
    int p; scanf("%d", &p);


    for (i = 0; i < p; i++) {
        scanf("%d %d", &c, &q);
        tc += calc(c, q);
    }

    printf("%.2lf\n", tc);

    return 0;
}
