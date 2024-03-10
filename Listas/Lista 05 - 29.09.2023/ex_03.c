/*
3. Escreva uma função que recebe um vetor de Point e os inicia com valores float aleatórios -50 e 50.
Ex: para obter um número float randômico no intervalo [-2..2], dividimos o resultado de rand() por
RAND_MAX, obtendo um float [0..1]. Com isso, basta multiplicar o resultado anterior pela
quantidade desejada de números (de -2 a 2, temos 5 números) e, finalmente, subtrair a metade
dessa quantidade (5/2.0f). De forma resumida:
float rand_number = (rand()/(float)RAND_MAX) * 5 - 5/2.0f;
void random_points(int n, Point v[])
*/

#include <stdio.h>
#include <stdlib.h>

struct point {
float x;
float y;
};
typedef struct point Point;

void random_points(int n, Point v[]){
    for(int i=0; i<n; i++){
        v[i].x = (rand()/(float)RAND_MAX) * 100 - 100/2.0f;
        v[i].y = (rand()/(float)RAND_MAX) * 100 - 100/2.0f;
        printf("%d = (%f, %f)\n",i,v[i].x,v[i].y);
    }
}

int main(){
    Point vet[] = {{-2.0f, 7.5f}, {5.0f, 12.4f}, {-2.0f, 7.5f}};
    random_points(3, vet);

    return 0;
}

//github.com/tiagodefendi
