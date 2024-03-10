/*
4. Escreva uma função que recebe um vetor de Point e encontra os dois pontos mais próximos, isto é,
aqueles que possuem a menor distância. A função deve imprimir os dois de pontos mais próximos -
(X1,Y1) e (X2,Y2) -, além da distância. Obviamente, você não deve considerar a distância de um
ponto a ele mesmo, que será sempre zero.
void nearest_points(int n, Point v[])
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

void nearest_points(int n, Point v[]){
    float a;
    float low = distance2D(v[0], v[1]);
    Point lp[] = {v[0], v[1]};

    for (int i=0; i<n-1; i++){
        for (int j=0; j<n; j++){
            if (v[i].x!=v[j].x && v[i].y!=v[j].y) {
                a = distance2D(v[i], v[j]);
                if (a<low){
                    low = a;
                    lp[0] = v[i];
                    lp[1] = v[j];
                    }
            }
        }
    }

    printf("%f\n",low);
    printf("Point 1: (%f, %f)\n",lp[0].x, lp[0].y);
    printf("Point 2: (%f, %f)\n",lp[1].x, lp[1].y);
}

int main(){
    Point vet[] = {{-2.0f, 7.5f}, {5.0f, 12.4f}, {0.0f, 7.5f}};
    nearest_points(3, vet);

    return 0;
}

//github.com/tiagodefendi
