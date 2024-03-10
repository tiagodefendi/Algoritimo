/*
1. Escreva uma função que recebe uma string (como parâmetro) e a imprime na tela, com cada
caractere separado por um espaço. Você não pode utilizar strlen().
void print_string(char str[])
*/

#include <stdio.h>

void print_string(char str[]){
    for(int i=0; str[i]!=0; i++) printf("%c ", str[i]);
    printf("\b \n");
}

int main(){
    char s[] = "aeiou";

    print_string(s);

    return 0;
}

//github.com/tiagodefendi
