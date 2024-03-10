/*
1. Escreva um programa em C que declara três variáveis (char, int e double) e imprime seus
endereços.
*/

#include <stdio.h>

int main(){
    char c;
    int i;
    double d;

    printf("%p\n",&c);
    printf("%p\n",&i);
    printf("%p\n",&d);

    return 0;
}

//github.com/tiagodefendi
