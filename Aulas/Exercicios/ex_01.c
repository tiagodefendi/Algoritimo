/*
Faça um programa que leia 3 inteiros e mostre:
    > Media aritimética simples (float)
    > O maior dos 3 numeros
*/

#include <stdio.h>

float avg3(int n1, int n2, int n3){
    float res = (n1 + n2 + n3) / 3.0;

    return res;
}

int higher(int n1, int n2, int n3){
    int higher = n1;
    if (n2 > higher){
        higher = n2;
    }
    if (n3 > higher){
        higher = n3;
    }

    return higher;
}

int main(){
    int n1, n2, n3;

    printf("Choose 3 integer numbers:\n");
    scanf(" %d", &n1);
    scanf(" %d", &n2);
    scanf(" %d", &n3);

    printf("The Arithmetic Mean = %f\n", avg3(n1, n2, n3));

    printf("The Higher int = %d\n", higher(n1, n2, n3));

    return 0;
}

//github.com/tiagodefendi
