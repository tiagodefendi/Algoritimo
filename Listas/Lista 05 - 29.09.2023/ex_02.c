/*
2. Considerando a estrutura Point do exercício anterior, escreva uma função que recebe um vetor de
pontos, bem como seu tamanho, e informa a distância a cada dois pontos consecutivos do vetor.
float distance_vector(int n, Point v[]);
*/

#include <stdio.h>
#include <math.h>

struct point {
float x;
float y;
};
typedef struct point Point;

float distance2D(Point p1, Point p2){
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}

float distance_vector(int n, Point v[]){
    for (int i=0; i<n-1; i++){
        printf("%f; ", distance2D(v[i], v[i+1]));
    }

    printf("");
}

int main(){
    Point vet[] = {{-2.0f, 7.5f}, {5.0f, 12.4f}, {-2.0f, 7.5f}};
    distance_vector(3, vet);

    return 0;
}

//github.com/tiagodefendi
