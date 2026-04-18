// 1079 - Medias Ponderadas - beecrowd

#include <stdio.h>

int main(void)
{
	int N; scanf("%d", &N);
	float x[3];
	int p0 = 2,
	    p1 = 3,
	    p2 = 5;
	int p = p0 + p1 + p2;
	int i, j;
	float s;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < sizeof(x)/sizeof(x[0]); j++) scanf("%f", &x[j]);
		s = (x[0]*p0 + x[1]*p1 + x[2]*p2) / p;
		printf("%.1f\n", s);
	}

	return 0;
}

