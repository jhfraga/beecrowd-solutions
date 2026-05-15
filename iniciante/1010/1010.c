// 1010 - Calculo Simples - beecrowd

#include <stdio.h>
#define v 2

int main(void)
{
	float total = 0;

	for (int i = 0; i < v; i++)
	{
		int c, q;
		float p;
		scanf("%d %d %f", &c, &q, &p);

		total += (float)q * p;
	}
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);

	return 0;
}

