/*
4. Escreva uma função que recebe o comprimento e o endereço de um vetor, e imprime o seu
conteúdo em ordem reversa, sem utilizar o operador de índice [ ] para acessar os elementos do
vetor.
void print_vector_reverse(int n, const int* v)
*/

#include <stdio.h>

void print_vector_reverse(int n, const int* v){
    for (int i=n-1; i>=0; i--){
        printf("%d\n", *(v+i));
    }
}

int main(){
    int vet[] = {1,3,5};
    print_vector_reverse(3, vet);

    return 0;
}

//github.com/tiagodefendi
