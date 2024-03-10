/*
2. Escreva uma função que receba um caminho de arquivo. Se o mesmo existir, faz nada. Se o
arquivo não existir, tenta criá-lo. A função deve retornar 1 (um) caso arquivo exista ou tenha sido
criado e, 0 (zero), caso contrário.
int check_or_create(const char *filepath)
*/

#include <stdio.h>

int check_or_create(const char *filepath);

int main(){;
    if (check_or_create("./data/ar1q.txt")) printf("GG\n");
    else printf("FUCK\n");

    return 0;
}

int check_or_create(const char *filepath){
    // FILE * file = fopen(filepath, "r");
    // return 1;
    FILE * file = fopen(filepath, "r");

    if (!file) {
        file = fopen(filepath, "w");
    }

    fclose(file);
    return 1;
}

//github.com/tiagodefendi
