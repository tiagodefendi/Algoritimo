/*
23. Escreva uma função que recebe dois vetores v1 e v2 ordenados crescentemente. Ela deve mesclar
ordenadamente os conteúdos de v1 e v2, colocando em v3. Considere que v3 tem tamanho n1 +
n2. OBS: não é permitido mesclar e ordenar.
void merge(int n1, int v1[], int n2, int v2[], int v3[])
Entrada: v1 = {1, 3, 4, 7, 9, 10}
v2 = {2, 3, 5, 7, 7, 14}
Saída: v3 = {1, 2, 3, 3, 4, 5, 7, 7, 7, 9, 10, 14}
*/

#include <stdio.h>

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void merge(int n1, int v1[], int n2, int v2[], int v3[]){
    int i=0, j=0, k=0;
    while (i<n1 && j<n2){
        if (v1[i] <= v2[j]){
            v3[k] = v1[i];
            i++;
            k++;
        }
        else{
            v3[k] = v2[j];
            j++;
            k++;
        }
    }

    while(i < n1){
        v3[k] = v1[i];
        i++;
        k++;
    }

    while(j < n2){
        v3[k] = v2[j];
        j++;
        k++;
    }
}

int main(){
    int v1[] = {1, 3, 4, 7, 9, 10};
    int v2[] = {2, 3, 5, 7, 7, 14};
    int v3[12] = {0};
    merge(6, v1, 6, v2, v3);

    print_vector(12, v3);

    return 0;
}

//github.com/tiagodefendi
