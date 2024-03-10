/*
2. Escreva uma função que recebe uma string e a imprime ao contrário (da direita para esquerda).
Faça duas versões da função: uma utilizando strlen() <string.h>, e outra, sem utilizar a função.
void print_string_reversed(char str[])
*/

#include <stdio.h>
#include <string.h>

void print_string_reversed(char str[]){
    for(int i=strlen(str)-1; i >=0; i--) printf("%c", str[i]);
    printf("\b \n");
}

void print_string_reversed2(char str[]){
    int c = 0;
    for (;str[c]!=0; c++);
    for(c--; c >=0; c--) printf("%c", str[c]);
    printf("\b \n");
}

int main(){
    char s[] = "asdasd";
    print_string_reversed(s);
    print_string_reversed2(s);

    return 0;
}

//github.com/tiagodefendi
