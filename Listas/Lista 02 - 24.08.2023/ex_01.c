/*
1. Escreva uma função que recebe um inteiro positivo e verifica se o mesmo é um Número Perfeito.
Um número perfeito é igual à soma de seus divisores positivos. Exemplo: 6 = 1 + 2 + 3. A função
deve retornar 1 (número perfeito) ou 0 (não é número perfeito).
int is_perfect_number(int a)
Informe o numero: 6
Divisores de 6: 1 + 2 + 3 = 6
Numero perfeito? Sim
*/

#include <stdio.h>

int is_perfect_number(int a){
    int i = 1, sum = 0;
    while (a > i){
        if (a%i == 0) sum += i;
        i ++;
    }

    return (sum == a) ? 1 : 0;
}

int main(){
    if (is_perfect_number(0)) printf("s");

    return 0;
}

//github.com/tiagodefendi
