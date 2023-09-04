/*
3. Escreva uma função que recebe um inteiro e o devolve invertido. Utilize "resto por 10" para extrair a
unidade e "divisão por 10" para remover a unidade.
int reverse_int(int a)
Exemplo de uso da função:
int rev = reverse_int(12543); // rev = 34521
*/

#include <stdio.h>

int rev(int a){
    int rev = 0;
    while (a > 0){
        rev = rev*10 + a%10;
        a /= 10;
    }


    return rev;
}

int main(){
    printf("%d",rev(12543));

    return 0;
}

//github.com/tiagodefendi
