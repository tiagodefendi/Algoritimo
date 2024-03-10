/*
6. Escreva uma função que receba um caminho de arquivo e acrescenta uma string no mesmo. A
função deve criar o arquivo especificado, caso não exista. Retorna 1 para sucesso ou 0, em caso
de erro. Dica: observe o modo de abertura 'a' (slide no. 5 do material).
int append_string(const char *filepath, const char* text)
*/

#include <stdio.h>

int append_string(const char *filepath, const char* text);

int main(){
    append_string("./data/arq.txt", "vou goza");

    return 0;
}

int append_string(const char *filepath, const char* text){
    FILE* file = fopen(filepath, "a");

    fputs(text, file);

    fclose(file);
    return 1;
}

//github.com/tiagodefendi
