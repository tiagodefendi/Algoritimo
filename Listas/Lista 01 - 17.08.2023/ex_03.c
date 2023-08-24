/*
3. Escreva um programa que lê o raio (r) de um círculo. O programa deve informar: o diâmetro (2r), a
circunferência (2πr) e a área do círculo (πr2). Crie uma macro: #define PI 3.141593
*/

#include <stdio.h>

#define PI 3.141593

int main(){
    float radius;

    printf("Enter radius' valor:\n");
    scanf(" %f", &radius);

    printf("Circle Diameter = %f\n", 2*radius);
    printf("Circle Circumference = %f\n", 2*PI*radius);
    printf("Circle Area = %f\n", PI*radius*radius);

    return 0;
}

//github.com/tiagodefendi
