/*
6. Escreva uma função que recebe um vetor vet de tamanho n e imprime apenas os valores pares.
void print_even(int n, int vet[])
*/

#include <stdio.h>

void print_even(int n, int vet[]){
    for (int i = 0; i < n; i++) if (vet[i] % 2 == 0) printf("%d ",vet[i]);
    printf("\n");
}

int main(){
    int vet[] = {1,2,3,4,5};

    print_even(5, vet);

    return 0;
}

//github.com/tiagodefendi
