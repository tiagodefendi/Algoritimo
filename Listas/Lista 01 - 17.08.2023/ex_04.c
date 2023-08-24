/*
4. Escreva um programa que lê dois números inteiros (a e b) e informa:
a. Resto (utilizado o operador %)
b. Resto (sem utilizar o operador %)
i. Dica: Faça a divisão “no papel” e observe quais outras operações podem ser utilizadas para obter o resto.
*/

#include <stdio.h>

float modulus(int number1, int number2){
    return ((number1/(float)number2)-(number1/number2))*number2;
}

int main(){
    int a,b;

    printf("Choose 2 integers numbers:\n");
    scanf(" %d %d",&a, &b);

    printf("%d %% %d = %d\n", a, b, a%b);
    printf("%d %% %d = %f\n", a, b, modulus(a, b));

    return 0;
}

//github.com/tiagodefendi
