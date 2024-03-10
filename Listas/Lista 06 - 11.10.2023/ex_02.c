/*
2. Escreva uma função que recebe o endereço de duas variáveis inteiras. A função deve somar os
valores contidos nessas variáveis por meio de seus endereços, colocando o resultado na primeira.
void add(int* a, int* b)
*/

#include <stdio.h>

void add(int *a, int *b){
    *a += *b;
}

int main(){
    int num1 = 100;
    int num2 = 1;

    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    add(&num1, &num2);

    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    return 0;
}

//github.com/tiagodefendi
