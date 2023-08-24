/*
11. Escreva um programa que lê um caractere da entrada. Se não for letra, informa. Se for letra,
verifica se é maiúscula (e passa para maiúscula se necessário). Ao final, deve informar a letra
digitada em maiúsculo.
*/

#include <stdio.h>

int main(){
    char c;

    printf("Enter a Character:\n>");
    scanf("%c", &c);

    if (65 <= c && c < 90) printf("Letter: %c\n", c);
    else if (97 <= c && c < 122) printf("Letter: %c\n", c-32);
    else printf("It isn't a letter\n");

    return 0;
}

//github.com/tiagodefendi
