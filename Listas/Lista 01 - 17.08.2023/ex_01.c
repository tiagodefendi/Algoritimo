/*
1. Escreva uma programa que lê (pelo terminal) dois números inteiros (a e b) e informa:
a. Adição
b. Subtração (a menos b)
*/

#include <stdio.h>

int main(){
    int a,b;
    
    printf("Choose 2 integers numbers:\n");
    scanf(" %d %d",&a, &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);

    return 0;
}

//github.com/tiagodefendi
