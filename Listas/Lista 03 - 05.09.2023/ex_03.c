/*
3. Escreva uma função que recebe uma string e imprime seus caracteres separados por um outro
caractere, fornecido como segundo parâmetro da função. Note que o separador não deve ser
impresso ao final.
void print_hyphenated(char str[], char separator)
Ex: char s[] = “hyphenization”
print_hyphenated(s, '$'); // saída: h$y$p$h$e$n$i$z$a$t$i$o$n
*/

#include <stdio.h>

void print_hyphenated(char str[], char separator){
    for(int i=0; str[i]!=0; i++) printf("%c%c", str[i], separator);
    printf("\b \n");
}

int main(){
    char s[] = "hyphenization";
    print_hyphenated(s, '$');

    return 0;
}

//github.com/tiagodefendi
