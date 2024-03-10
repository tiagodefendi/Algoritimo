/*
2. Escreva uma função que lê o conteúdo de um arquivo para um vetor de inteiros, alocado em heap.
A função deve retornar o endereço do vetor alocado na heap. O tamanho do vetor deve ser
retornado pela função pelo parâmetro 'n'. Caso o arquivo não exista, a função deve retornar NULL.
int* read_array(const char* filepath, int* n)
Exemplo de uso da função:
int n;
// lê arquivo 'dados.bin' para 'v'. Preenche o tamanho de 'v' em 'n'.
int* v = read_array("dados.bin", &n);
print_array(n, v);
free(v);
*/

#include <stdio.h>
#include <stdlib.h>

void print_array(int n, int* v);
int* read_array(const char* filepath, int* n);

int main() {
    int n;
    int* v = read_array("./data/dados.bin", &n);
    
    if (v != NULL) {
        print_array(n, v);
        free(v);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }

    return 0;
}

void print_array(int n, int* v){
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int* read_array(const char* filepath, int* n){
    FILE* file = fopen(filepath, "rb");
    
    if (!file) return NULL;

    fseek(file, 0, SEEK_END);
    *n = ftell(file) / sizeof(int);
    int* v = malloc((*n) * sizeof(int));
    fseek(file, 0, SEEK_SET);

    fread(v, sizeof(int), *n, file);

    fclose(file);
    return v;
}
