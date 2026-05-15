// 1072 - Intervalo 2 - beecrowd

#include <stdio.h>

int main(void)
{
	int N; scanf("%d", &N);
	
	int x;
	int contIn = 0, contOut = 0;


	for (int i = 0; i < N; i++)
	{
		scanf("%d", &x);
		if (x >= 10 & x <= 20) contIn++;
		else contOut++;
	}

	printf("%d in\n", contIn);
	printf("%d out\n", contOut);

	return 0;
}
