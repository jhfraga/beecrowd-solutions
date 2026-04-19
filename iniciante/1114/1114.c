// 1114 - Senha Fixa - beecrowd

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int passUser;
	int passCorrect = 2002;

	while (true)
	{
		scanf("%d", &passUser);
		
		if (passUser != passCorrect) printf("Senha Invalida\n");
		else {
			printf("Acesso Permitido\n"); 
			break;
		}
	}

	return 0;
}
