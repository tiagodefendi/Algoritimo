/*
2. Escreva uma função que receba um vetor de inteiros e seu tamanho n. A função deve retornar o
endereço de um novo vetor, alocado na heap, contendo os max maiores elementos contidos no
vetor original. OBS: você pode modificar o conteúdo do vetor original, se necessário.
int* get_largest(int n, int* v, int max)
Exemplo de uso da função:
int v0[] = {6,10,2,1,2,3,9}
int* v1 = get_largets(7, v0, 2); // retorna vetor com os 2 maiores valores de v0
print_vector(2, v1); // imprime 10,9
free(v1); // libera array alocado na heap
*/

#include <stdio.h>
#include <stdlib.h>

void print_vector(int n, int v[n]);
int* get_largets(int n, int* v, int max);

int main() {
    int v0[] = {11,10,2,1,2,3,9};
    int* v1 = get_largets(7, v0, 3); // retorna vetor com os 2 maiores valores de v0
    print_vector(3, v1); // imprime 10,9
    free(v1); // libera array alocado na heap

    return 0;
}

void print_vector(int n, int v[n]){
    for (int i=0; i<n; i++) printf("%d ", v[i]);
    printf("\n");
}

int* get_largets(int n, int* v, int max){
    int* highers = malloc(sizeof(int)*max);
    for (int i=0; i<max; i++) highers[i] = v[0];
    for (int j=1; j<n; j++){
        if (v[j] > highers[0]) highers[0] = v[j];
    }
    
    for (int i=1; i<max; i++){
        for (int j=1; j<n; j++){
            if (!(highers[i]<highers[i-1])) highers[i] = v[j];
            if (highers[i-1] > v[j] && v[j] > highers[i]) highers[i] = v[j];
        }
    }

    return highers;
}

