/*
5. Escreva uma função que lê um registro de filme de um arquivo, na posição indicada (0, 1, 2, ...). A
função deve retornar uma cópia do registro. Se a posição for inválida, a função deve retornar um
registro preenchido com zeros. OBS: você não deve trazer todos os registros para a RAM, em um
array. A função deve ler somente somente o registro em questão.
Movie read_movie(const char* filepath, int pos)
Exemplo de uso da função:
// considerando o exemplo do exercício 3
Movie movie = read_movie("movies.bin", 4); //movie = {8,"Ghosts of
Mars"}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
long id;
char name[51];
} Movie;


Movie read_movie(const char* filepath, int pos);

int main() {
    Movie movie = read_movie("./data/movies.bin", 4);
    printf("%ld, %s\n",movie.id, movie.name);

    return 0;
}

Movie read_movie(const char* filepath, int pos){
    FILE* file = fopen(filepath, "rb");

    fseek(file, 0, SEEK_END);

    Movie *pmovie = malloc(sizeof(Movie));

    if (pos+1 <= ftell(file)/sizeof(Movie)){
        fseek(file, pos*sizeof(Movie), SEEK_SET);
        fread(pmovie, sizeof(Movie), 1, file);
    }

    else {
        pmovie->id = 0;
        strcpy(pmovie->name, "\0");
    }

    Movie movie = *pmovie;
    
    free(pmovie);
    fclose(file);
    return movie;
}
