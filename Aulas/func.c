#include <stdio.h>
#include <stdlib.h>

float avg2(int a, int b){
    float res = (a + b)/2.0f;
    return res;
}

int randint(int max){
    return rand() % (max + 1);
}

int main(){
    printf("AVG > %f\n",avg2(2, 5));

    printf("Random > %d\n",randint(5));
    printf("Random > %d\n",randint(5));
    printf("Random > %d\n",randint(5));
    printf("Random > %d\n",randint(5));
    printf("Random > %d\n",randint(5));

    return 0;
}

//github.com/tiagodefendi
