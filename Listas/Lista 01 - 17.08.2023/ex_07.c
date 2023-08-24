/*
7. Escreva uma função que recebe um número de dias e informa a quantidade correspondente em:
anos + semanas + dias.
a. Considere:
i. Ano = 365 dias
ii. Semana = 7 dias
b. Exemplo:
Dias: 427 = 1 ano(s), 8 semana(s) e 6 dia(s)
Função: void print_days(int days)
*/

#include <stdio.h>

void print_days(int days){
    printf("Days: %d = ", days);

    int years = days / 365;
    days -= years*365;

    int weeks = days / 7;
    days -= weeks*7;

    printf("%d years, %d weeks, %d days", years, weeks, days);
}

int main(){
    print_days(427);

    return 0;
}
