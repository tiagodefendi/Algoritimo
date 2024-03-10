/*
8. Escreva uma função que conta e devolve o número de palavras em uma string. Considere que
poderá haver mais de um espaço entre as palavras, bem como, no início e final da string.
int count_words_plus(char str[])
Ex: char s[] = “ first things first, second things latter “;
printf(“%d”, count_words_plus(s)); // saída: 6
*/

#include <stdio.h>

int count_words_plus(char s[]){
    int c = 0;
    for(int i=0; s[i]!=0;i++){
        if (((64<s[i]&&s[i]<91) || (96<s[i]&&s[i]<123)) && !((64<s[i+1]&&s[i+1]<91) || (96<s[i+1]&&s[i+1]<123))) c++;
    }
    return c++;
}

int main(){
    printf("%d",count_words_plus(" first things first, second things  latter "));

    return 0;
}

//github.com/tiagodefendi
