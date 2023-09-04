/*
5. Escreva uma função que recebe dois inteiros positivos (A e B) e retorna o MMC (Mínimo Múltiplo
Comum) entre ambos. O MMC é o menor número que resulta da multiplicação de A e B por algum
número (não necessariamente igual para ambos). Dica: teste os múltiplos do MAIOR(A, B), até
encontrar um que seja divisível pelo MENOR(A, B). OBS: Sempre há um MMC entre dois números
quaisquer.
int mmc(int a, int b)
Observe o processo para 30 e 12
-------------------------------
Múltiplos de 30: 30, 60, 90,120,150,...
Múltiplos de 12: 12, 24, 36, 48, 60,...
x1 x2 x3 x4 x5 ...
O MMC entre 30 e 12 é 60.
*/

#include <stdio.h>

int mmc(int a, int b){
    int i = (a > b) ? a : b;
    while (i % a != 0 || i % b !=0){
        i++;
    }

    return i;
}

int main(){
    printf("mmc: %d", mmc(30, 12));

    return 0;
}

//github.com/tiagodefendi
