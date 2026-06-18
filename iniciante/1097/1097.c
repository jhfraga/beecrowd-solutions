// 1097 - Sequencia IJ 3 - beecrowd

#include <stdio.h>

int main(void) {
	int I, J, inicioJ = 7;

	for (I = 1; I < 10; I += 2) {
		for (J = inicioJ; J > inicioJ - 3; J--) {
			printf("I=%d J=%d\n", I, J);
		}
		inicioJ += 2;
	}
	return 0;
}

