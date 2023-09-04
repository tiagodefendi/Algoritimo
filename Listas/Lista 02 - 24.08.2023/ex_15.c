/*
15. Escreva uma função que recebe pontos X,Y em um vetor points de tamanho n. O vetor conterá os
pontos sequencialmente: [X1, Y1, X2, Y2, X3, Y3,...]. A função deve informar a distância entre cada
par de pontos consecutivos. Distância: sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) ). Função square
root: https://www.tutorialspoint.com/c_standard_library/c_function_sqrt.htm).
void distances(int n, int points[])
*/

#include <stdio.h>
#include <math.h>

void distances(int n, int points[]){
    for(int x=0, y=1, d; y+2<n; x++,y++){
        d = sqrt( pow((points[x+2]-points[x]),2) + pow((points[y+2]-points[y]),2));
        printf("(%d,%d) - (%d, %d) = %d\n",points[x],points[y],points[x+2],points[y+2],d);
    }
}

int main(){
    int v[] = {-3,-11,2,1};
    distances(4, v);

    return 0;
}

//github.com/tiagodefendi
