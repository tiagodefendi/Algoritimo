/*
7. Escreva uma função que recebe o endereço de uma string. A função deve concatenar, ao final da
string original, uma barra vertical, seguida do conteúdo da string de forma invertida. Considere que
o vetor possui comprimento suficiente para a adição dos novos caracteres. Você não deve utilizar o
operador de índice [ ] para acessar os caracteres da string.
void make_mirrored(char* str)
Exemplo de uso da função:
char name[40] = "John Doe";
make_mirrored(name);
printf("%s\n", name); // Saída "John Doe|eoD nhoJ"
*/

#include <stdio.h>

void make_mirrored(char* str){
    int c = 1;
    while (*(str+c)) c++;

    for(int i=0, j=c, k=c; i<c; i++, j++, k--){
        if (j == c) printf("|");
        else if (j == c*2) printf("0");
        else printf("%c",str+k);
    }
}

int main(){
    char name[40] = "John Doe";
    make_mirrored(name);
    printf("%s\n", name);

    return 0;
}

//github.com/tiagodefendi
