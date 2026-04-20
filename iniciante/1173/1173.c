// 1173 - Preenchimento de Vetor I - beecrowd

#include <stdio.h>

int main(void)
{
	int V, i;
	scanf("%d", &V);

	for (i = 0; i < 10; i++) 
	{
		printf("N[%d] = %d\n", i, V);
		V*=2;
	}

	return 0;
}

