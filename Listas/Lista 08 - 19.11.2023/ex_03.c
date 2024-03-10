/*
3. Escreva uma função que receba um caminho de arquivo e imprima seu conteúdo no terminal.
Retorna 1 para sucesso ou 0, caso o arquivo não exista.
int print_content(const char *filepath)
*/

#include <stdio.h>

int print_content(const char *filepath);

int main(){
    print_content("./data/arq.txt");

    return 0;
}

int print_content(const char *filepath){
    FILE* file = fopen(filepath, "r");

    if (!file) {
        fclose(file);
        return 0;
    }

    char ch;
    while ( (ch = fgetc(file)) != EOF ) {
        printf("%c", ch);
    }

    fclose(file);
    return 1;
}

//github.com/tiagodefendi
