/*
20. Escreva uma função que recebe três vetores e seus tamanhos. A função deve concatenar (juntar) o
conteúdo de v1 e v2 em v3. Considere que v3 tem tamanho n1 + n2. Os vetores contém apenas
inteiros positivos.
void vector_concat(int n1, int v1[n1], int n2, int v2[n2], int v3[])
Exemplo:
int v1[5] = {1,2,3,4,5};
int v2[3] = {2,3,8};
int v3[8];
vecor_concat(5, v1, 3, v2, v3); // v3 = {1,2,3,4,5,2,3,8}
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void vector_concat(int n1, int v1[], int n2, int v2[], int v3[]){
    for(int i=0; i<n1; i++){
        v3[i] = v1[i];
    }
    for(int i=0, j=n1; i<n2; i++, j++){
        v3[j] = v2[i];
    }
}

int main(){
    int v1[5] = {1,2,3,4,5};
    int v2[3] = {2,3,8};
    int v3[8];
    vector_concat(5, v1, 3, v2, v3);

    print_vector(8, v3);

    return 0;
}

//github.com/tiagodefendi
