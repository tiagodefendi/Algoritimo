/*
8. Escreva uma função que verifica se os elementos de um vetor estão em ordem crescente. A função
deve retornar 1 (true), caso os elementos estejam dispostos em ordem crescente, ou 0 (false), em
caso contrário.
int is_sorted(int n, int vet[])
Exemplo de uso da função:
int v[] = {1,4,7,9,15,22,48,512};
int res = is_sorted(8, v); // neste caso, res = 1 (true)
*/

#include <stdio.h>

int is_sorted(int n, int vet[]){
    for (int i=0, j=1; j<n; i++, j++) if (vet[i] > vet[j]) return 0;

    return 1;
}

int main(){
    int v[] = {1,4,7,9,15,22,48,512};

    if (is_sorted(8, v)) printf("s");

    return 0;
}

//github.com/tiagodefendi
