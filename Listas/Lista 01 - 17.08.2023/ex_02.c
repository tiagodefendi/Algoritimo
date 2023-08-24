/*
2. Escreva um programa que lê dois números inteiros (a e b) e informa:
a. Multiplicação
b. Divisão inteira (a dividido por b)
c. Divisão float (a dividido por b)
*/

#include <stdio.h>

int main(){
    int a,b;

    printf("Choose 2 integers numbers:\n");
    scanf(" %d %d",&a, &b);

    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d / %d = %f\n", a, b, a/(float)b);


    return 0;
}

//github.com/tiagodefendi
