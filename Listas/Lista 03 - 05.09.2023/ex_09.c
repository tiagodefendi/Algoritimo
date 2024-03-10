/*
9. Escreva uma função que recebe uma string composta de várias palavras. A função deve modificar
a letra inicial de cada palavra para maiúscula e, as demais, para minúsculas. Considere que
sempre haverá ao menos um espaço entre cada palavra.
void string_capitalize(char str[])
Ex: char s[] = “welCOME To COMPUTER programming!!”;
string_capitalize(s);
printf(“%s”, s); // saída: Welcome To Computer Programming!!
*/

#include <stdio.h>

void string_capitalizer(char s[]){
    int flag = 1;

    for(int i=0; s[i]!=0; i++){
        if (flag && (96<s[i]&&s[i]<123)){
            s[i] -= 32;
            flag = 0;
        }
        else if (!flag && (64<s[i]&&s[i]<91)){
            s[i] += 32;
        }

        if (!((64<s[i]&&s[i]<91) || (96<s[i]&&s[i]<123))){
            flag = 1;
        }
    }
}

int main(){
    char s[] = "welCOME To COMPUTER programming!!";
    string_capitalizer(s);
    printf("%s", s);

    return 0;
}

//github.com/tiagodefendi
