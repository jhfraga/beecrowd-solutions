// 1042 - Sort Simples - beecrowd

#include <stdio.h>

#define tam 3

int main(void)
{
	int n[tam], c[tam];
	int temp = 0;
	int i, j;

	for (i = 0; i < tam; i++) 
	{
		scanf("%d", &n[i]);
		c[i] = n[i];
	}
	
	for (i = 0; i < tam - 1; i++)
	{
		for (j = 0; j < tam - i - 1; j++)
		{
			if (n[j] > n[j + 1])
			{
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}
	}
	
	for (i = 0; i < tam; i++) printf("%d\n", n[i]);
	printf("\n");
	for (i = 0; i < tam; i++) printf("%d\n", c[i]);

	return 0;
}

