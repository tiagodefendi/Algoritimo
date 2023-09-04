/*
18. Considerando o mesmo formato de lista do exercício anterior, escreva uma função que recebe um
vet1 de tamanho n e uma posição. A função deve “remover” o elemento da lista, marcando a
posição com -1. Caso a posição seja inválida, nenhuma operação deve ser realizada.
void vector_remove(int n, int vet1[], int pos)
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void vector_remove(int n, int vet[], int pos){
    if(pos<n && vet[pos] != -1) vet[pos] = -1;
}

int main(){
    int v[] = {2,3,4,5,-1};

    vector_remove(5, v, 2);
    print_vector(5, v);

    return 0;
}

//github.com/tiagodefendi
