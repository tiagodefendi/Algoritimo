/*
5. Escreva uma função que recebe um Contact (ver struct abaixo) e imprime seu conteúdo. A função
também recebe um vetor de strings contendo os nomes dos tipos, chamado type_names. O
campo type do contato deve ser utilizado como índice no vetor type_names.
void print_contact(Contact c, int n, char type_names[n][50])
struct contact {
int id;
char name[51];
char email[51];
int type;
};
typedef struct contact Contact;
Exemplo de uso da função:
char types[][50] = {"família","amigo","trabalho","escola","outros"};
Contact c = {1, "John Doe", "john.doe@email.com", 2};
print_contact(c, 5, types);
// saída: {1, John Doe, john.doe@email.com, trabalho}
*/

#include <stdio.h>

struct contact {
    int id;
    char name[51];
    char mail[51];
    int type;
};
typedef struct contact Contact;

void print_contact(Contact c, int n, char type_names[n][50]){
    printf("ID:   %d\n", c.id);
    printf("Name: %s\n", c.name);
    printf("Mail: %s\n", c.mail);
    printf("Type: %s\n", type_names[c.type]);
}

int main(){
    char types[][50] = {"família","amigo","trabalho","escola","outros"};
    Contact c = {1, "John Doe", "john.doe@email.com", 2};
    print_contact(c, 5, types);

    return 0;
}

//github.com/tiagodefendi
