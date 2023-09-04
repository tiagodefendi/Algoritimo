/*
11. Escreva uma função que recebe um vetor vet de tamanho n e inverte os seus elementos (no
próprio vetor).
void reverse(int n, int vet[])
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void reverse(int n, int vet[]){
    for(int i=0, j=n-1; i<n/2; i++, j--){
        int temp;
        temp = vet[i];
        vet[i] = vet[j];
        vet[j] = temp;
    }
}

int main(){
    int v[] = {1,2,3,4,5};

    print_vector(5, v);
    reverse(5, v);
    print_vector(5, v);

    return 0;
}

//github.com/tiagodefendi
