/*
8. Escreva uma função que receba um caminho de arquivo e retorna uma string (vetor de caracteres
terminado em nulo) alocada em heap contendo o conteúdo do arquivo. Caso ocorra algum
problema, retorna NULL.
char* get_content(const char *filepath)
*/

#include <stdio.h>
#include <stdlib.h>

char* get_content(const char *filepath);

int main () {
    char* str = get_content("./data/arq.txt");
    printf("%s\n",str);
    free(str);
    return 0;
}

char* get_content(const char *filepath){
    FILE* file = fopen(filepath, "r");

    fseek(file, 0, SEEK_END);
    char* str = malloc(sizeof(char)*ftell(file));
    
    fseek(file, 0, SEEK_SET);
    int count=0;
    char ch;
    while ( (ch = fgetc(file)) != EOF ) {
        str[count] = ch;
        count++;
    }

    str[count] = 0;

    fclose(file);
    return str;
}
