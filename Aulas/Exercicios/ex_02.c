//Programa que some os valores de um vetor

#include <stdio.h>

int vector_sum(int n, int v[]) {
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += v[i];
    }

    return sum;
}

int main(){
    int vet[] = {1,2,3,4,5};

    printf("%d\n",vector_sum(5, vet));

    return 0;
}

//github.com/tiagodefendi
