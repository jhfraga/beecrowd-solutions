//1180 - Menor e posicao - beecrowd

#include <stdio.h>

int main(){
    unsigned int N, i, p;
    scanf("%u", &N);

    int X[N];
    int menor;
    for(i = 0; i < N; i++){
        scanf("%d", &X[i]);
        if(i == 0) menor = X[i];
        if(i > 0 && X[i] < menor){
            menor = X[i];
            p = i;
        }
    }
    printf("Menor valor: %d\n", X[p]);
    printf("Posicao: %u\n", p);
    return 0;
}