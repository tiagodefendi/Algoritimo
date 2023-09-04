/*
10. Escreva uma função que recebe um vetor vet de tamanho n, bem como, um elemento elem a ser
procurado. A função deve substituir todas as ocorrência de elem por -1.
void replace_all(int n, int vet[], int elem)
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void replace_all(int n, int vet[], int elem){
    for(int i=0; i<n; i++) if (vet[i] == elem) vet[i] = -1;
}

int main(){
    int v[] = {1,2,3,4,5,6,3,7,3};
    print_vector(9, v);
    replace_all(9, v, 3);
    print_vector(9, v);

    return 0;
}

//github.com/tiagodefendi
