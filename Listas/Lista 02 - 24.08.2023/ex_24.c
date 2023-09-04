/*
24. Escreva uma função que recebe um vetor contendo números inteiros. Ela deve determinar o
segmento de soma máxima e imprimi-lo.
void max_sum_slice2(int n, int v[])
Exemplo: No vetor {5, 2,-2,-7, 3,14,10,-3, 9,-6, 4, 1}, a soma do segmento é 33.
*/

#include <stdio.h>

void max_sum_slice2(int n, int v[]){
    int sum=v[0], max=v[0];

    for (int i=1; i<n; i++){
        if (sum + v[i] <= 0){
            if (max < v[i]) max = v[i];
            sum=0;
            continue;
        }
        sum += v[i];
        if (max < sum){
            max=sum;
        }
    }

    printf("> %d\n", max);
}

int main(){
    int v[] = {5, 2,-2,-7, 3,14,10,-3, 9,-6, 4, 1};
    max_sum_slice2(12, v);

    int v2[] = {-2,-5,-3,-1};
    max_sum_slice2(4, v2);

    return 0;
}

//github.com/tiagodefendi
