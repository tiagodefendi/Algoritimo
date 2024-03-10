/*
5. Escreva uma função que receba um caminho de arquivo e escreva uma string no mesmo. A função
deve (re)criar o arquivo especificado. Retorna 1 para sucesso ou 0, em caso de erro.
int save_string(const char *filepath, const char* text)
*/

#include <stdio.h>

int save_string(const char *filepath, const char* text);

int main(){

    save_string("./data/arq.txt","ain zé da manga\n₢");

    return 0;
}

int save_string(const char *filepath, const char* text){
    FILE* file = fopen(filepath, "w");
    // fputs(text, file);

    for (int i = 0; text[i] != '\0'; i++) {
        fputc(text[i], file);
    }


    fclose(file);
    return 1;
}

//github.com/tiagodefendi
