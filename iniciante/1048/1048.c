// 1048 - Aumento de Salario - beecrowd

#include <stdio.h>

int main(void)
{
    // -- vetores
    const double salario[] = {400, 800, 1200, 2000};
    const int aumento[] = {15, 12, 10, 7, 4};

    // -- input
    double s;
    scanf("%lf", &s);

    // -- variaveis
    int p = aumento[4];          // percentual
    int i;                       // index

    for (i = 0; i < sizeof(salario) / sizeof(salario[0]); i++) 
    {
        if (s <= salario[i]) {
            p = aumento[i];
            break;
        }
    }

    // -- output
    printf("Novo salario: %.2lf\n", s * (1 + p / 100.0));
    printf("Reajuste ganho: %.2lf\n", s * p / 100.0);
    printf("Em percentual: %d %%\n", p);

    return 0;
}
