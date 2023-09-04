/*
9. Escreva uma função que recebe um vetor vet de tamanho n e devolve o maior valor contido no
vetor.
int find_max(int n, int vet[])
*/

#include <stdio.h>

int find_max(int n, int vet[]){
    int max = vet[0];

    for (int i = 1; i < n; i++) if (vet[i]>max) max = vet[i];

    return max;
}

int main(){
    int v[] = {1,4,7,9,15,22,48,512};

    printf(">>> %d", find_max(8, v));

    return 0;
}

//github.com/tiagodefendi
