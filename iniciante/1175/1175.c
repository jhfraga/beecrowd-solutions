// 1175 - Troca em Vetor I - beecrowd

#include <stdio.h>
#define tam 20

int main(void){
    int X[tam];
    unsigned int i;
    for(i = 0; i < sizeof(X) / sizeof(X[0]); i++){
        scanf("%d", &X[tam -1 -i]);
    }
    for(i = 0; i < sizeof(X) / sizeof(X[0]); i++) 
        printf("N[%d] = %d\n", i, X[i]);
    return 0;
}
