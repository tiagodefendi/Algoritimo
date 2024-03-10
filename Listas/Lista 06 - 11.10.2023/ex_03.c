/*
3. Escreva uma função que recebe o comprimento e o endereço de um vetor, e imprime o seu
conteúdo, sem utilizar o operador de índice [ ] para acessar os elementos do vetor.
void print_vector(int n, const int* v)
*/

#include <stdio.h>

void print_vector(int n, const int* v){
    for (int i=0; i<n; i++){
        printf("%d\n", *(v+i));
    }
}

int main(){
    int vet[] = {1,3,5};
    print_vector(3, vet);

    return 0;
}

//github.com/tiagodefendi
