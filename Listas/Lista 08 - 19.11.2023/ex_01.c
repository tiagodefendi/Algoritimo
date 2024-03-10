/*
1. Escreva uma função que verifica se o arquivo de caminho informado existe (retorna 1). Caso
contrário, retorna 0.
int file_exists(const char* filepath)
Exemplo de uso da função:
int res = file_existis("C:\documentos\programa.exe"); // retorna 1 se existir
*/

#include <stdio.h>

int file_exists(const char* filepath);

int main(){
    if (file_exists("./data/arq.txt")) printf("GG\n");
    else printf("FUCK\n");

    return 0;
}

int file_exists(const char* filepath){
    FILE * file = fopen(filepath, "r");

    if (!file) {
        fclose(file);
        return 0;
    }

    fclose(file);
    return 1;
}

//github.com/tiagodefendi
