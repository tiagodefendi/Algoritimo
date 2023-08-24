/*
5. Escreva uma função que imprime a tabuada de um número informado. Dica: lembre-se que você
pode alinhar os valor na saída com %2d (dois dígitos, alinhados à direita)
Função: void print_mult_table(int number)
Ex: print_mult_table(5)
5 x 1 = 5   5 x 6 = 30
5 x 2 = 10  5 x 7 = 35
5 x 3 = 15  5 x 8 = 40
5 x 4 = 20  5 x 9 = 45
5 x 5 = 25  5 x 10= 50
*/

#include <stdio.h>

void print_mult_table(int num){
    printf("%-2d x 1  = %-2d  ", num, num*1);
    printf("%-2d x 6  = %-2d\n", num, num*6);
    printf("%-2d x 2  = %-2d  ", num, num*2);
    printf("%-2d x 7  = %-2d\n", num, num*7);
    printf("%-2d x 3  = %-2d  ", num, num*3);
    printf("%-2d x 8  = %-2d\n", num, num*8);
    printf("%-2d x 4  = %-2d  ", num, num*4);
    printf("%-2d x 9  = %-2d\n", num, num*9);
    printf("%-2d x 5  = %-2d  ", num, num*5);
    printf("%-2d x 10 = %-2d\n", num, num*10);
}

int main(){
    print_mult_table(5);

    return 0;
}

//github.com/tiagodefendi
