/*
7. Escreva uma função que conta e devolve o número de palavras em uma string. Considere que
haverá somente um espaço entre as palavras.
int count_words(char str[])
Ex: char s[] = “first things first, second things latter“;
printf(“%d”, count_words(s)); // saída: 6
*/

#include <stdio.h>

int count_words(char s[]){
    int c = 0;
    for(int i=0; s[i]!=0;i++){
        if (((64<s[i]&&s[i]<91) || (96<s[i]&&s[i]<123)) && !((64<s[i+1]&&s[i+1]<91) || (96<s[i+1]&&s[i+1]<123))) c++;
    }
    return c++;
}

int main(){
    printf("%d",count_words("first things first, second things latter"));

    return 0;
}

//github.com/tiagodefendi
