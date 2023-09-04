/*
12. Escreva uma função que faz a leitura de n números inteiros e os coloca no vetor vet fornecido.
Considere que o vet possui tamanho n.
void read_vector(int n, int vet[])
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void read_vector(int n, int vet[]){
    for(int i=0; i<n; i++){
        printf("> ");
        scanf("%d", &vet[i]);
    }
}

int main(){
    int v[] = {1,2,3,4,5};

    read_vector(5, v);
    print_vector(5, v);

    return 0;
}

//github.com/tiagodefendi
