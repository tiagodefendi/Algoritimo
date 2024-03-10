/*
8. Escreva uma função que recebe um vetor de empregados (Employee) e seu tamanho. A função
deve imprimir os nomes dos três empregados de maiores salários, ou seja, as pessoas que
recebem os três maiores salários.
void print_best3(int n, Employee v[n]);
*/

#include <stdio.h>

struct employee {
    char name[50];
    float salary;
    int type;
};
typedef struct employee Employee;

void print_best3(int n, Employee v[n]){
    float b1=0, b2=0, b3=0;
    for (int i=0; i<n; i++){
        if (v[i].salary > b1){
            b3 = b2;
            b2 = b1;
            b1 = v[i].salary;
        }
        else if (v[i].salary > b2){
            b3 = b2;
            b2 = v[i].salary;
        }
        else if (v[i].salary > b2){
            b3 = v[i].salary;
        }
    }
    printf("TOP SALARY\n1º: %f\n2º: %f\n3º: %f\n",b1,b2,b3);
}

int main(){
    Employee list[] = {
        {"Joj", 1300, 0},
        {"Jorge", 1500, 0},
        {"Jog", 1000, 1},
        {"Doge", 2000, 2},
        {"Dog", 1100, 3},
    };

    print_best3(5, list);

    return 0;
}

//github.com/tiagodefendi
