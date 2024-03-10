/*
4. Escreva uma função que retorna a quantidade de registros de filmes contidos em um arquivo.
int count_movies(const char* filepath)
Exemplo de uso da função:
// considerando o exemplo do exercício anterior
int size = count_movies("movies.bin"); // size = 7
*/

#include <stdio.h>

typedef struct {
long id;
char name[51];
} Movie;

int count_movies(const char* filepath);

int main (){
    printf("%d\n",count_movies("./data/movies.bin"));

    return 0;
}

int count_movies(const char* filepath){
    FILE* file = fopen(filepath, "rb");

    fseek(file, 0, SEEK_END);
    int size = ftell(file)/sizeof(Movie);

    return size;
}
