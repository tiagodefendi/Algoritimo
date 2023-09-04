/*
16. Escreva uma função que recebe dois vetores (vet1 e vet2) de mesmo tamanho n. A função deve
copiar todos os elementos de vet1 para vet2.
void vector_copy(int n, int vet2[], int vet1[])
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void vector_copy(int n, int vet[], int vet2[]){
    for (int i=0; i<n; i++) vet2[i] = vet[i];
}

int main(){
    int v[]={4,5,6,2,5}, v2[5];
    vector_copy(5, v, v2);
    print_vector(5,v2);

    return 0;
}

//github.com/tiagodefendi
