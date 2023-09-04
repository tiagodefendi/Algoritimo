/*
13. Escreva uma função que recebe um vetor vet de tamanho n preenchido com inteiros positivos. A
função deve imprimir as ocorrências (contagem) de cada número no vetor. Dica: utilize um vetor
count para armazenar a contagem de cada elemento no vetor vet, relacionando as posições de
count aos valores em vet.
void count_elements(int n, int vet[])
*/

#include <stdio.h>

void count_elements(int n, int vet[]){
    int ct, count[n];
    for (int i=0; i<n; i++){
        count[i] = vet[i];
    }
    for (int i=0; i<n; i++){
        ct = 1;
        if (vet[i] == -1) continue;
        for (int j = i+1; j<n; j++){
            if (vet[i] == vet[j]){
                vet[j] = -1;
                ct++;
            }
        }
        printf("%d x %d; ", ct, vet[i]);
    }
}

int main(){
    int v[] = {1,2,3,4,4,3,4,5};
    count_elements(8, v);

    return 0;
}

//github.com/tiagodefendi
