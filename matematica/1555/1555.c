// 1555 - Funcoes - beecrowd

#include <stdio.h>
#include <math.h>

// criamos uma funcao para cada jogador retornando seus respectivos resultados
int rafael(int x, int y) { return pow(3 * x, 2) + pow(y, 2); };
int beto(int x, int y)   { return 2 * pow(x, 2) + pow(5 * y, 2); };
int carlos(int x, int y) { return -100 * x + pow(y, 3); };

// criamos um funcao que recebe os dois valores que serao testados
void resultado(int v_X, int v_Y)
{
    int V[3] = { rafael(v_X, v_Y), beto(v_X, v_Y), carlos(v_X, v_Y) }; // o vetor é inicializado com cada valor retornado de suas funcoes
    char Ch[3][10] = {"Rafael", "Beto", "Carlos"};                     // vetor com os nomes dos jogadores na posicao exata do vetor acima
    int i, maior = V[0], p = 0;                                        // nossa variavel auxiliar 'maior' recebe a primeiro valor de vetor V
                                                                       // a variavel p é para guardarmos a posicao do maior valor
    for(i = 1; i < 3; i++)
    {
        if(V[i] > maior) {       // verificamos qual valor é maior
            maior = V[i];        // maior recebe o maior valor
            p = i;               // guardamos a posicao do vetor
        }
    }
    printf("%s ganhou\n", Ch[p]); // apresentamos o resultado da posicao de maior valor
}

int main()
{
    int N, i;                    // recebemos os numeros de casos a serem testados
    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        int X, Y;                 // passamos os valores de X e Y
        scanf("%d %d", &X, &Y);   

        resultado(X, Y);          // chamamos a funcao 'resultado' passando os valores de X e Y
    }
    return 0;
}
