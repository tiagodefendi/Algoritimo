/*
5. Escreva uma função que recebe o comprimento e o endereço de um vetor. A função deve retornar,
via parâmetros min e max, o maior e o menor valor contido no vetor. Você não deve utilizar o
operador de índice [ ] para acessar os elementos do vetor.
void get_min_max(int n, const int* v, int* min, int* max)
*/

#include <stdio.h>

void get_min_max(int n, const int* v, int* min, int* max){
    *min = *v;
    *max = *v;

    for (int i=0; i<n; i++){
        if(*(v+i) < *min) *min = *(v+i);
        if(*(v+i) > *max) *max = *(v+i);
    }
}

int main(){
    int *min;
    int *max;
    int a[] = {1,2,2,4,9,6,-1};

    get_min_max(7, a, min, max);

    printf("Min: %d\nMax: %d\n", *min, *max);

    return 0;
}

//github.com/tiagodefendi
