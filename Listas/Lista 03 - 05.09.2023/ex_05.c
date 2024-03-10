/*
5. Escreva uma função que recebe uma string e a converte para letras maiúsculas. Atenção: a string
poderá conter letras maiúsculas e símbolos.
void string_to_upper(char str[])
Ex: char s[] = “All your BASE are Belong to US!”;
stringToUpper(s);
printf(“%s”, s); // saída: ALL YOUR BASE ARE BELONG TO US!
*/

#include <stdio.h>

void string_to_upper(char s[]){
    for(int i=0; s[i]!=0; i++){
        if(96<s[i]&&s[i]<123) s[i] -= 32;
    }
}

int main(){
    char s[] = "Hello, World!";
    string_to_upper(s);
    printf("%s",s);

    return 0;
}

//github.com/tiagodefendi
