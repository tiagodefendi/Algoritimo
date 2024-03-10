/*
9. Escreva uma função que recebe um nome, o verifica e corrige, se necessário. Um nome deve
conter apenas letras, com as iniciais de cada nome em maiúscula e o restante em minúsculas.
Deve haver somente um espaço entre cada nome e não devem haver espaços no início e final.
void fix_name(char name[])
Exemplo de uso da função:
char name[] = " JoHN DOE# 23! "
fix_name(name);
// Após a chamada, name: "John Doe"
*/

#include <stdio.h>

void fix_name(char name[]){
    for (int i=0, j=0; name[i]; i++){
        if (('A'<=name[i]&&name[i]>='Z')||('a'<=name[i]&&name[i]>='z')) {
            if (('A'<=name[i]&&name[i]>='Z')||('a'<=name[i]&&name[i]>='z')||j==0){}
        }
    }
}

int main(){

    return 0;
}

//github.com/tiagodefendi
