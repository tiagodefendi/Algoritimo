/*
19. Considere as operações dos dois exercícios anteriores. Após algumas operações de inserção e
remoção, o vetor ficará repleto de “buracos”. Escreva uma função que recebe um vetor vet de
tamanho n. O vetor contém inteiros positivos e posições livres, marcadas com -1. A função deve
desfragmentar o vetor, colocando todos os valores válidos à esquerda.
void vector_defrag(int n, int vet[n])
Exemplo:
int v[9] = {1, 6, -1, 9, 4, -1, -1, 2, -1} // vetor original
vector_defrag(9, v); // v = {1, 6, 9, 4, 2, -1, -1, -1, -1}
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void vector_defrag(int n, int vet[n]){
    for(int i=0; i<n; i++){
        if (vet[i] == -1){
            for(int j=i+1; j<n; j++){
                if (vet[j] > 0){
                    vet[i] = vet[j];
                    vet[j] = -1;
                    break;
                }
            }
        }
    }
}

int main(){
    int v[9] = {1, 6, -1, 9, 4, -1, -1, 2, -1};

    vector_defrag(9, v);
    print_vector(9, v);

    return 0;
}

//github.com/tiagodefendi
