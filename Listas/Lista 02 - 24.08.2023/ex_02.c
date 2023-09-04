/*
2. Escreva uma função que recebe um inteiro positivo e imprime seus fatores primos (e quantidades).
void print_factors(int a)
Informe o numero:
> 132
2 x fator 2
1 x fator 3
1 x fator 11
*/

#include <stdio.h>

void print_factors(int a){
    int i = 2, sum = 0;
    while (i <= a){
        if (a % i == 0) {
            a /= i;
            sum ++;
        }
        else {
            if (sum > 0) printf("%d x factor %d\n",sum, i);
            i ++;
            sum = 0;
        }
    }
    printf("%d x factor %d\n",sum, i);

}

int main(){
    print_factors(132);

    return 0;
}

//github.com/tiagodefendi
