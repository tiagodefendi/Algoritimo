/*
4. Escreva uma função que recebe dois inteiros positivos (A e B) e retorna o MDC (Máximo Divisor
Comum) entre ambos. O MDC é o maior número que divide A e B (divisão exata, de resto zero).
Dica: teste os divisores do MENOR(A, B) até encontrar o maior número que divide A e B.
int mdc(int a, int b)
Observe o processo para 30 e 12
-------------------------------
Divisores de 30: 1, 2, 3, 5, 6, 10, 15, 30
Divisores de 12: 1, 2, 3, 4, 6, 12
^ MDC
*/

#include <stdio.h>

int mdc(int a, int b){
    int i = 1, j= (a>b)? b : a, mdc;
    while (i <= j){
        if (a%i==0 && b%i==0) mdc = i;
        i++;
    }

    return mdc;
}

int main(){
    printf("mdc: %d", mdc(36, 12));

    return 0;
}

//github.com/tiagodefendi
