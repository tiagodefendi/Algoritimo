/*
4. Escreva uma função que receba um caminho de arquivo e retorna a quantidade de linhas de texto
contidas no arquivo. Dica: o caractere '\n' define a quebra de linha no texto.
int count_lines(const char *filepath)
*/

#include <stdio.h>

int count_lines(const char *filepath);

int main(){
    printf("%d\n",count_lines("./data/arq.txt"));

    return 0;
}

int count_lines(const char *filepath){
    FILE* file = fopen(filepath, "r");

    int count = 1;
    char ch;
    while ( (ch = fgetc(file)) != EOF ) {
        if (ch == '\n') count++;
    }

    fclose(file);
    return count;
}

//github.com/tiagodefendi
