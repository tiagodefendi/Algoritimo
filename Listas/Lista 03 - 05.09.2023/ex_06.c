/*
6. A função strcmp(str1, str2) compara duas strings alfabeticamente. Ela devolve:
a. res < 0 se str1 < str2 << str1 vem antes de str2
b. res = 0 se str1 = str2
c. res > 0 se str1 > st2 << str1 vem depois de str2
Escreva uma função que compara duas strings independente do caso (maiúsculo ou minúsculo).
Ela deve retornar os mesmos tipos de valores que strcmp(). Dica: com a função do exercício
anterior, você poderá passar ambas strings para maiúsculas e, então, compará-las com strcmp().
int strcmp_plus(char s1[], char s2[])
Ex: int res = strcmp_plus(“JOanna”, “joanna”); // res:0 (strings iguais)
*/

#include <stdio.h>
#include <string.h>

void string_to_upper(char s[]){
    for(int i=0; s[i]!=0; i++){
        if(96<s[i]&&s[i]<123) s[i] -= 32;
    }
}

int strcmp_plus(char s1[], char s2[]){
    string_to_upper(s1);
    string_to_upper(s2);

    return strcmp(s1, s2);
}

int main(){
    printf("%d", strcmp_plus("asd", "ad"));

    return 0;
}

//github.com/tiagodefendi
