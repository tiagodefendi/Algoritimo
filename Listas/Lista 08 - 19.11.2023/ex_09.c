/*
9. Escreva uma função que receba um caminho de arquivo e retorna um vetor de strings contendo
todas as palavras do arquivo. Considere como separadores de palavras o caractere de espaço e a
quebra de linha '\n'. "Caso ocorra algum problema, retorna NULL.
char** get_words(const char *filepath)
Exemplo:
Arquivo 'texto.txt':
C is a general-purpose programming language, widely used and very influential.
By design, C reflects the capabilities of the targeted CPUs, such as types,
operations and memory access.
Retorno da função:
{"C", "is", "a", "general-purpose", "programming", "language,", "widely",
"used", "and", "very", "influential.", "By", "design,", "C", "reflects", "the",
"capabilities", "of", "the", "targeted", "CPUs,", "such", "as", "types,",
"operations", "and", "memory", "access."}
*/

#include <stdio.h>
#include <stdlib.h>

char* get_words(const char *filepath);

int main() {
    char* str = get_words("./data/arq.txt");
    int count = 0;
    while (count < 24) {
        printf("%c", str[count]);
        count++;
    }

    free(str);
    return 0;
}

char* get_words(const char *filepath){
    FILE* file = fopen(filepath, "r");

    fseek(file, 0, SEEK_END);
    char* str = malloc(sizeof(char)*ftell(file));
    
    fseek(file, 0, SEEK_SET);
    int count=0;
    char ch;
    while ( (ch = fgetc(file)) != EOF ) {
        if (ch==' '||ch=='\n') str[count] = 0;
        else str[count] = ch;
        count++;
    }

    str[count] = 0;


    fclose(file);
    return str;
}
