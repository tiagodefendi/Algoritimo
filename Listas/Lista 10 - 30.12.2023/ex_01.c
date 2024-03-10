/*
1. Escreva uma função que grava o conteúdo de um vetor de inteiros em um arquivo. Caso o arquivo
não exista, a função deve criá-lo.
void write_array(const char* filepath, int n, const int* v)
Exemplo de uso da função:
int v[] = {1,2,3,4,5,6,7,8,9,10};
// cria arquivo 'dados.bin' com conteúdo de 'v'
write_array("dados.bin", 10, v);
*/

#include <stdio.h>

void write_array(const char* filepath, int n, const int* v);

int main() {
    int v[] = {1,2,3,4,5,6,7,8,9,10};
    write_array("./data/dados.bin", 10, v);

    return 0;
}

void write_array(const char* filepath, int n, const int* v){
    FILE* file = fopen(filepath, "ab");
    fwrite(v,sizeof(int),n,file);
    fclose(file);
}
