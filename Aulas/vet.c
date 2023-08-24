#include <stdio.h>
#include <stdlib.h>

void func(int n) {
    int v3[n];
}

void print_vector(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

void reverse(int n, int v[]){
    int v2[n];
    for(int i=0, j=n-1; i<n; i++,j--){
        v2[j] = v[i];
    }
    for(int i=0; i<n; i++){
        v[i] = v2[i];
    }
}

void reverse2(int n, int v[]){
    for(int i=0, j=n-1; i<j; i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

void vector_randomize(int n, int v[], int max){
    for(int i=0; i<n; i++){
        v[i] = rand() % max;
    }
}

void vector_randomize2(int n, int v[], int min, int max){
    for(int i=0; i<n; i++){
        v[i] = (rand()+min) % max;
    }
}

int main(){
    int v[5];
    int v2[] = {1,2,3,4,5};
    func(7);
    char vogais[] = {'a','e','i','o','u'};
    float valores[150];

    vogais[0] = 'X';

    vector_randomize(5, v, 100);
    print_vector(5, v);
    reverse(5, v);
    print_vector(5, v);
    reverse2(5, v);
    print_vector(5, v);
    vector_randomize2(5, v, 2, 7);
    print_vector(5, v);

    return 0;
}

//github.com/tiagodefendi
