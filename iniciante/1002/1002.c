// 1002 - Area do Circulo - beecrowd

#include <stdio.h>
#define pi 3.14159

void calc(double r)
{
    double area;

    area = pi * (r * r);
    printf("A=%.4lf\n", area);
}

int main(void)
{
    double R; scanf("%lf", &R);

    calc(R);

    return 0;
}
