/*
22. Escreva uma função que recebe três vetores e seus tamanhos. A função deve realizar a
intersecção entre os vetores v1 e v2, colocando os valores em v3. Considere que v3 tem tamanho
min(n1, n2). Os vetores contém apenas números naturais (inteiros positivos) e v3 deve ser iniciado
com 0.
void vector_intersection(int n1, int v1[n1], int n2, int v2[n2], int v3[])
Exemplo:
int v1[5] = {1,2,3,4,5};
int v2[3] = {2,3,8};
int v3[3] = {0};
vector_intersection(5, v1, 3, v2, v3); // v3 = {2,3,0}
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void vector_intersection(int n1, int v1[n1], int n2, int v2[n2], int v3[]){
    for(int i=0, j=0, flag = 0; i<n1; i++, flag = 0){
        for(int k=0; k < n2; k++){
            if (v1[i] == v2[k]){
                flag = 1;
            }
        }
        if (flag){
            v3[j] = v1[i];
            j++;
        }
    }
}

int main(){
    int v1[5] = {1,2,3,4,5};
    int v2[3] = {2,3,8};
    int v3[3] = {0};
    vector_intersection(5, v1, 3, v2, v3);

    print_vector(3, v3);

    return 0;
}

//github.com/tiagodefendi
