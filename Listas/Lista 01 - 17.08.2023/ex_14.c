/*
14. Escreva um programa que calcula a idade de uma pessoa a partir da data de nascimento, lida pelo
terminal em três variáveis (dia, mês e ano). Para obter a data atual, utilize as funções get_day(),
get_month() e get_year(), fornecidas pelo código em anexo.
*/

#include <stdio.h>

#include<time.h>
struct tm get_date() {
time_t t = time(NULL);
return *localtime(&t);
}
int get_day() {
return get_date().tm_mday;
}
int get_month() {
return get_date().tm_mon+1;
}
int get_year() {
return get_date().tm_year+1900;
}

int main(){
    int day, month, year, years_old;

    printf("> ");
    scanf(" %d %d %d", &day, &month, &year);

    years_old =  -(day+month*30+year*365)+(get_day()+get_month()*30+get_year()*365);

    printf("%d years ",years_old/365);

    if (years_old%365 > 0) {
        years_old %= 365;
        if (years_old > 30) {
            printf("%d months ", years_old/30);
            years_old /= 30;
        }
        
        if (years_old > 0) {
            printf("%d days", years_old);
        }

    }

    printf("\n");

    return 0;
}

//github.com/tiagodefendi
