/*
14. Escreva uma função que recebe um valor inteiro value e um vetor notes com as possíveis cédulas.
A função deve imprimir a quantidade mínima de cédulas equivalente ao valor.
Dica: use um vetor auxiliar count para armazenar a contagem de cada cédula.
void min_bills(int value, int n, int bills[]) // n é o tamanho de bills
Exemplo:
min_bills(209, 5, (int[]){1,5,10,50,100}); // lista de tipos de cédulas
2 x R$100,00
1 x R$5,00
4 x R$1,00
*/

#include <stdio.h>

void min_bills(int value, int n, int bills[]){
    int count[5] = {0};
    while (value > 0){
        n--;
        count[n] = value/bills[n];
        value = value% bills[n];
        printf("%d x R$%d,00\n", count[n], bills[n]);
    }
}

int main(){
    min_bills(257, 5, (int[]){1,5,10,50,100});

    return 0;
}

//github.com/tiagodefendi
