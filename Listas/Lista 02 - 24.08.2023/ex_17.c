/*
17. Um vetor pode ser utilizado como uma lista que permite inserções e remoções de números inteiros
positivos. No vetor, o valor -1 indica posição vazia (disponível). Escreva uma função que recebe um
vet1 de tamanho n e um novo elemento. A função deve inserir o novo elemento na primeira
posição válida disponível, isto é, marcada com -1. Caso não haja alguma posição disponível, a
inserção deve ser cancelada.
void vector_insert(int n, int vet1[], int elem)
int v[9] = {1, 6, -1, 9, 4, -1, -1, 2, -1}
vector_insert(9, v, 18); // v = {1, 6, 18, 9, 4, -1, -1, 2, -1}
vector_insert(9, v, 7); // v = {1, 6, 18, 9, 4, 7, -1, 2, -1}
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void vector_insert(int n, int vet[], int elem){
    for(int i=0; i<n; i++){
        if (vet[i] == -1){
            vet[i] = elem;
            break;
        }
    }
}

int main(){
    int v[] = {2,3,4,5,-1};

    vector_insert(5, v, 89);
    print_vector(5, v);

    return 0;
}

//github.com/tiagodefendi
