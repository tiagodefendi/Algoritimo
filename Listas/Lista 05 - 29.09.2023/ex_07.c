/*
7. Escreva uma função que recebe uma lista de empregados (Employee) e seu tamanho. A função
deve calcular e imprimir: o total dos salários, a média dos salários e as médias dos salários por tipo
de empregado (“Developer”, “Designer”, “Manager” ou “Support”).
void employees_report(int n, Employee v[n]);
struct employee {
char name[50];
float salary;
int type; // 0 - Developer, 1 - Designer, 2 - Manager, 3 - Support
};
typedef struct employee Employee;
*/

#include <stdio.h>

struct employee {
    char name[50];
    float salary;
    int type;
};
typedef struct employee Employee;

void employees_report(int n, Employee v[n]){
    float total = 0;
    char types[][51] ={"Developer", "Designer", "Manager", "Support"};
    float per_type[] = {0, 0, 0 ,0};
    int count_per_type[] = {0, 0, 0, 0};

    for(int i=0; i<n; i++){
        total += v[i].salary;
        per_type[v[i].type] += v[i].salary;
        count_per_type[v[i].type] ++;
    }

    printf("Total: %f\n",total);
    printf("AVG: %f\n",total/n);
    for(int i=0; i<4; i++){
        printf("AVG %s: %f\n",types[i], per_type[i]/count_per_type[i]);
    }
}

int main(){
    Employee list[] = {
        {"Joj", 1300, 0},
        {"Jorge", 1500, 0},
        {"Jog", 1000, 1},
        {"Doge", 2000, 2},
        {"Dog", 1100, 3},
    };

    employees_report(5, list);

    return 0;
}

//github.com/tiagodefendi
