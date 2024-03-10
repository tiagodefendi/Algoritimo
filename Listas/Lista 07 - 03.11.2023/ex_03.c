/*
3. Escreva uma função que receba o endereço de uma string. A função deve retornar o endereço de
uma cópia da string alocada na heap.
char* copy_string(const char* str) // 'const' indica que o vetor original não
// pode ser modificado dentro da função
*/

#include <stdio.h>
#include <stdlib.h>

char* copy_string(const char* str);

int main() {
    char str[] = "vamu porraa";
    char* str1 = copy_string(str);
    printf("%s\n", str1);

    free(str1);
    return 0;
}

char* copy_string(const char* str){
    int lenght;
    for (lenght=1; str[lenght]; lenght++);

    char* strcp = malloc(sizeof(char)*lenght);
    
    for (int i=0; i<lenght; i++) strcp[i] = str[i];
    
    return strcp;
}
