/*
3. Para os exercícios que seguem, considere o tipo estruturado Movie, que deverá ser utilizado para
manipular arquivos de registros de filmes:
typedef struct {
long id;
char name[51];
} Movie;
Escreva uma função que grava o conteúdo de um vetor de filmes (Movie) em um arquivo. Caso o
arquivo não exista, a função deve criá-lo.
void write_all_movies(const char* filepath, int n, const Movie* v)
Exemplo de uso da função:
Movie list[] = {
{6, "They Live"},
{11,"Big Trouble in Little China"},
{10,"The Thing"},
{1, "In the Mouth of Madness"},
{8, "Ghosts of Mars"},
{23,"Halloween"},
{7, "Village of the Damned"}
};
// cria arquivo 'dados.bin' com conteúdo de 'list'
write_all_movies("movies.bin", 7, list);
*/

#include <stdio.h>

typedef struct {
long id;
char name[51];
} Movie;

void write_all_movies(const char* filepath, int n, const Movie* v);

int main() {
    Movie list[] = {
        {6, "They Live"},
        {11,"Big Trouble in Little China"},
        {10,"The Thing"},
        {1, "In the Mouth of Madness"},
        {8, "Ghosts of Mars"},
        {23,"Halloween"},
        {7, "Village of the Damned"}
    };
    write_all_movies("./data/movies.bin", 7, list);

    return 0;
}

void write_all_movies(const char* filepath, int n, const Movie* v){
    FILE* file = fopen(filepath, "ab");

    fwrite(v, sizeof(Movie), n, file);

    fclose(file);
}
