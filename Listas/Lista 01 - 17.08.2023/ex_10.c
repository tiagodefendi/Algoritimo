/*
10. Escreva uma função que recebe três notas escolares n1, n2 e n3 (0..10). A função deve calcular e
imprimir a média aritmética simples das três notas, bem como, o conceito que o aluno obteve pela
média, segundo estes critérios:
a. Conceito A, se média no intervalo [8,5..10]
b. Conceito B, se média no intervalo [7,0..8,5[
c. Conceito C, se média no intervalo [5,5..7,0[
d. Conceito F, se média inferior a 5,5
Função: void print_grade(float n1, float n2, float n3)
*/

#include <stdio.h>

void print_grade(float n1, float n2, float n3){
    float avg = (n1 + n2 + n3) / 3;

    if (avg < 5.5f) printf("Conceito F: %.2f", avg);
    else if (5.5f <= avg && avg < 7) printf("Conceito C: %.2f\n", avg);
    else if (7 <= avg && avg < 8.5f) printf("Conceito B: %.2f\n", avg);
    else if (8.5f <= avg && avg < 10) printf("Conceito A: %.2f\n", avg);
}

int main(){
    print_grade(7, 8, 9);
    print_grade(1, 8, 9);
    print_grade(10, 8.5f, 10);
    print_grade(7.1f, 5.5f, 8.8f);

    return 0;
}
