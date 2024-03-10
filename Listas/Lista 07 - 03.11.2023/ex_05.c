/*
5. Escreva uma função que concatene duas strings e retorne o resultado em uma nova string, alocada
na heap.
char* concat_string(const char* str1, const char* str2)
*/


#include <stdio.h>
#include <stdlib.h>

char* concat_string(const char* str1, const char* str2);

int main() {
    char str[] = "é isso, ";
    char str2[] = "vamu porraa";
    char* str1 = concat_string(str, str2);
    printf("%s\n", str1);

    free(str1);
    return 0;
}

char* concat_string(const char* str1, const char* str2){
    int lenght1;
    int lenght2;
    for (lenght1=0; str1[lenght1]; lenght1++);
    for (lenght2=1; str2[lenght2]; lenght2++);

    char* strcc = malloc(sizeof(char)*(lenght1+lenght2));
    
    for (int i=0; i<lenght1; i++) strcc[i] = str1[i];
    for (int i=0; i<lenght2; i++) strcc[i+lenght1] = str2[i];
    
    return strcc;
}

