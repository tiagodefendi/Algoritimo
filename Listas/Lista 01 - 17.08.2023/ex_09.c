/*
9. Escreva uma função que recebe três números e os imprime em ordem crescente.
Função: void print_sorted(int a, int b, int c)
*/

#include <stdio.h>

void print_sorted(int a, int b, int c){
    if (a >= b && b >= c) printf("%d >= %d >= %d\n", a, b, c);
    else if (a >= c && c >= b) printf("%d >= %d >= %d\n", a, c, b);
    else if (b >= a && a >= c) printf("%d >= %d >= %d\n", b, a, c);
    else if (b >= c && c >= a) printf("%d >= %d >= %d\n", b, c, a);
    else if (c >= a && a >= b) printf("%d >= %d >= %d\n", c, a, b);
    else if (c >= b && b >= a) printf("%d >= %d >= %d\n", c, b, a);
}

int main(){
    print_sorted(5, 7, 3);

    return 0;
}
