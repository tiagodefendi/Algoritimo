/*
6. Escreva uma função que retorna a posição de um registro de filme em um arquivo, a partir de seu
ID (campo Movie::id). A função deve retornar a posição (índice) que o registro ocupa no arquivo ou
-1, caso ID inexistente. OBS: você não deve trazer todos os registros para a RAM, em um array. A
função deve acessar registro por registro, no próprio arquivo.
long find_movie(const char* filepath, long id)
Exemplo de uso da função:
// considerando o exemplo do exercício 3
long pos = find_movie("movies.bin", 23); // pos = 5
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
long id;
char name[51];
} Movie;

long find_movie(const char* filepath, long id);

int main () {
    printf("%ld\n", find_movie("./data/movies.bin", 23));

    return 0;
}

long find_movie(const char* filepath, long id){
    FILE* file = fopen(filepath, "rb");

    Movie *pmovie = malloc(sizeof(Movie));

    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    for (long i=0; i<size; i++){
        fseek(file, sizeof(Movie)*i, SEEK_SET);
        fread(pmovie, sizeof(Movie), 1, file);
        
        if ( pmovie->id == id) {
            free(pmovie);
            fclose(file);
            return i;
        }
    }

    free(pmovie);
    fclose(file);
    return -1;
}
