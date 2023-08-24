/*
6. Escreva uma função que recebe um float e informa, separadamente:
a. O número com 2 casas de precisão;
b. A parte inteira e a parte decimal;
c. Sua representação em notação científica (mantissa/expoente)**
**Verifique a documentação da função printf: http://www.cplusplus.com/reference/cstdio/printf/
Função: void print_float(float number)
*/

#include <stdio.h>

void print_float(float number){
    printf("> %.2f\n", number);
    printf("> %d\n", (int)number);
    printf("> %f\n", number-(int)number);
    printf("> %e\n", number);
}

int main(){
    print_float(3.141593);

    return 0;
}

//github.com/tiagodefendi
