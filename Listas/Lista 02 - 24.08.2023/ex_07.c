/*
7. Escreva uma função que recebe um vetor vet de tamanho n contendo números inteiros positivos e
negativos. A função deve inverter o sinal dos números negativos, passando-os para positivo.
void set_positive(int n, int vet[])
Entrada:{1, -5, 67, -45, -1, -1, 0, 48} → Saída:{1, 5, 67, 45, 1, 1, 0, 48}
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void set_positive(int n, int vet[]){
    for(int i = 0; i < n; i++) if (vet[i] < 0) vet[i] = -vet[i];
}

int main(){
    int v[] = {1, -5, 67, -45, -1, -1, 0, 48};

    print_vector(8, v);
    set_positive(8, v);
    print_vector(8, v);

    return 0;
}

//github.com/tiagodefendi
