/*
4. Escreva uma função que receba o endereço de uma string. A função deve retornar o endereço de
uma cópia reversa da string alocada na heap.
char* copy_reverse(const char* str)
*/

#include <stdio.h>
#include <stdlib.h>

char* copy_reverse(const char* str);

int main() {
    char str[] = "vamu porraa";
    char* str1 = copy_reverse(str);
    printf("%s\n", str1);
    
    free(str1);
    return 0;
}

char* copy_reverse(const char* str){
    int lenght;
    for (lenght=1; str[lenght]; lenght++);

    char* strcp = malloc(sizeof(char)*lenght);

    strcp[lenght] = 0;
    lenght--;
    for (int i=0; i<lenght; i++) strcp[i] = str[lenght-i];
    
    return strcp;
}

