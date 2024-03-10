/*
6. Escreva uma função que recebe as dimensões e o endereço de uma matriz (vetor bidimensional).
A função deve imprimir seu conteúdo, sem utilizar o operador de índice [ ] para acessar os
elementos da matriz.
void print_vector2D(int rows, int cols, const int* v)
Exemplo de uso da função:
int v[3][4] = {
{1, 2, 3, 4},
{5, 6, 7, 8},
{9,10,11,12}
};
print_vec2(3, 4, (int*)v);
Saída:
01 02 03 04
05 06 07 08
09 10 11 12
*/

#include <stdio.h>

void print_vector2D(int rows, int cols, const int* v){
    for(int i=0; i<rows*cols; i++){
        printf("%02d ", *(v+i));
        if ((i+1)%cols==0) printf("\n");
    }
}

int main(){
    int v[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
    };

    print_vector2D(3, 4, v);

    return 0;
}

//github.com/tiagodefendi
