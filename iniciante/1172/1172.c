// 1172 - Substituicao em Vetor I

#include <stdio.h>

int main(void)
{
	int i;
	int x[10]; 
	for (i = 0; i < sizeof(x)/sizeof(x[0]); i++) scanf("%d", &x[i]);

	for (i = 0; i < sizeof(x)/sizeof(x[0]); i++)
	{
		if (x[i] <= 0) x[i] = 1;
		printf("X[%d] = %d\n", i, x[i]);
	}

	return 0;
}

