//1069 - Diamantes e Areia - beecrowd

#include <stdio.h>

int contador_diamantes(const char V[]); // prototipamos a funcao

int main(){
    int N;                            // N sera o numero de casos
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        char Ch[1000];                // criamos o vetor de caracteres
        scanf("%s", Ch);

        printf("%d\n", contador_diamantes(Ch)); // chamamos a funcao que retorna o valor inteiro com o resultado
    }
    return 0;
}

int contador_diamantes(const char V[]) // criamos uma funcao que recebe um vetor de caracteres
{
    int diamantes = 0, pilha = 0;      // inicializamos nossas variaveis em 0
    for(int j = 0; V[j] != '\0'; j++)  // percorremos o vetor ate chegar ao final '\0'
    {
        if(V[j] == '<') pilha++;       // se encontrarmos o sinal '<' pilha recebe 1
        else if(V[j] == '>'){          // senao se o sinal for '>'
            if(pilha > 0){             // verificamos e existe o par '<'
                diamantes++;           // se existir o par, encontramos 1 diamante
                pilha--;               // removemos '<' da pilha
            } 
        }
    }
    return diamantes;
}
