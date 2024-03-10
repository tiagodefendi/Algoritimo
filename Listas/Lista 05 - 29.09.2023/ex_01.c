/*
1. Escreva uma função que recebe dois pontos x,y (Point) e devolve a distância entre os mesmos.
Utilize sqrt() da lib <math.h> para obter a raiz quadrada:
float distance2D(Point p1, Point p2);
struct point {
float x;
float y;
};
typedef struct point Point;
Exemplo de uso função:
Point p1 = {-2.0f, 7.5f};
Point p2 = {5.0f, 12.4f};
float dist = distance(p1, p2);
OBS: para compilar com a lib <math.h>, talvez seja necessário acrescentar o argumento -lm à
chamada do gcc:
$ gcc programa.c -lm
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

int main(){
    Point p1 = {-2.0f, 7.5f};
    Point p2 = {5.0f, 12.4f};

    printf("%f",distance2D(p2, p1));

    return 0;
}

//github.com/tiagodefendi
