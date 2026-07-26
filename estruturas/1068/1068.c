//1068 - Balanco de Parenteses I - beecrowd

#include <stdio.h>

int main(){
    char N[1000];                           // criamos um vetor de caracteres
    while (scanf("%s", N) != EOF)           // quando nao houver mais entradas o scanf retorna EOF (End Of File) e encerra o loop
    {
        int saldo = 0;                          // criamos nossa variavel auxiliar e inicializamos em 0
        for(int i = 0; N[i] != '\0'; i++)       // o laco for percorre todo o vetor de caracteres ate encontrar \0 que sinaliza o fim do vetor
        {
            if(N[i] == '(') saldo++;            // quando encontramos o parenteses aberto saldo recebe 1
            else if (N[i] == ')')               // quando encontramos o parenteses fechado saldo recebe -1
            {
                saldo--;
                if(saldo < 0) break;            // se o saldo for negativo isso signfica que nao foi aberto os parenteses. Podemos sair do loop
            }
            
        }
        printf("%s\n", (saldo == 0) ? "correct" : "incorrect"); // apresentamos o resultado com um if ternario dado o resultado do nosso saldo
    }
    
    return 0;
}
