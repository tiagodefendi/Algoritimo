/*
7. Escreva uma função que receba um caminho de arquivo e escreva linhas de strings no mesmo. Ela
deve (re)criar o arquivo especificado. A função recebe um vetor de strings e cada uma deve ser
escrita em uma linha do arquivo. Retorna 1 para sucesso ou 0, em caso de erro.
int add_string(const char *filepath, const char** text_lines)
*/

#include <stdio.h>

int add_string(const char *filepath, const char** text_lines);

int main(){
    char strgs[][100] = {"ai","vou gozaaa",'ahhn',0};
    char** strgsp = strgs;
    
    add_string("./data/arq.txt", strgs);

    return 0;
}

int add_string(const char *filepath, const char** text_lines){
    FILE* file = fopen(filepath, "w");

    for (int i=0; text_lines[i]; i++) {
        fputs(text_lines[i], file);
        fputc('\n', file);
    }

    fclose(file);
    return 1;
}

//github.com/tiagodefendi
