/*
4. Escreva uma função que recebe uma string e imprime:
a. A quantidade de letras (maiúsculas ou minúsculas);
b. A quantidade de dígitos;
c. A quantidade de símbolos.
OBS: considere apenas a porção dos caracteres imprimíveis da tabela ASCII, isto
é, dos índices 32 ao 126.
void string_report(char str[])
*/

#include <stdio.h>

void string_report(char str[]){
    int letters=0, digits=0, symbols=0;
    for(int i=0; str[i]!=0; i++){
        if ((64 < str[i] && str[i] < 91) || (96 < str[i] && str[i] < 123)) letters++;
        else if (47 < str[i] && str[i] < 58) digits++;
        else symbols++;
    }
    printf("l: %d; d: %d; s: %d\n",letters,digits,symbols);
}

int main(){
    char s[] = "01234asSD #@!?";

    string_report(s);

    return 0;
}

//github.com/tiagodefendi
