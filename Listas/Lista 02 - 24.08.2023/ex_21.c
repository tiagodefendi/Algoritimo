/*
21. Escreva uma função que recebe três vetores e seus tamanhos. A função deve realizar a união
entre os vetores v1 e v2, colocando os valores em v3. Considere que v3 tem tamanho n1 + n2. Os
vetores contém apenas inteiros positivos e v3 deve ser iniciado com 0.
void vector_union(int n1, int v1[n1], int n2, int v2[n2], int v3[])
Exemplo:
int v1[5] = {1,2,3,4,5};
int v2[3] = {2,3,8};
int v3[8] = {0};
vector_union(5, v1, 3, v2, v3); // v3 = {1,2,3,4,5,8,0,0}
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void vector_union(int n1, int v1[n1], int n2, int v2[n2], int v3[]){
    for(int i=0, j=0, flag = 1; i<n1; i++, flag = 1){
        for(int k=0; k < n1+n2; k++){
            if (v1[i] == v3[k]){
                flag = 0;
            }
        }
        if (flag){
            v3[j] = v1[i];
            j++;
        }
    }
    for(int i=0, j=n1, flag = 1; i<n2; i++, flag = 1){
        for(int k=0; k < n1+n2; k++){
            if (v2[i] == v3[k]){
                flag = 0;
            }
        }
        if (flag){
            v3[j] = v2[i];
            j++;
        }
    }
}

int main(){
    int v1[5] = {1,2,3,4,5};
    int v2[3] = {2,3,8};
    int v3[8] = {0};
    vector_union(5, v1, 3, v2, v3);

    print_vector(8, v3);

    return 0;
}

//github.com/tiagodefendi
