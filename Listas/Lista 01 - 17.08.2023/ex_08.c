/*
8. Escreva uma função que recebe um inteiro representando um ano e retorna se o mesmo é
bissexto. A função deve retornar 1 (true) para bissexto ou 0 (false), em caso contrário. Para um ano
ser bissexto (leap year), ele precisa:
a. Ser divisível por 4 e não divisível por 100, OU, ser divisível por 400.
Função: int is_leap_year(int year)
*/

#include <stdio.h>

int is_leap_year(int year){
    if ((year % 4 == 0 && year %100 != 0) || year % 400 == 0) return 1;
    else return 0;
}

int main(){
    if (is_leap_year(2020)) printf("1");
    else printf("0");

    return 0;
}
