// 1174 - Selecao em Vetor I - beecrowd

#include <stdio.h>
#define tam 100

int main(void){
    float A[tam];
    unsigned int i;
    for(i = 0; i < sizeof(A) / sizeof(A[0]); i++){
        scanf("%f", &A[i]);
    }
    for(i = 0; i < sizeof(A) / sizeof(A[0]); i++){
        if(A[i] <= 10.0) printf("A[%d] = %.1f\n", i, A[i]);
    }
    return 0;
}
