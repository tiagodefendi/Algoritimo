/*
12. Escreva um programa que lê um caractere e informa:
a. Se é letra e, neste caso, também informa se é vogal ou consoante;
b. Se é número;
c. Se é símbolo (ASCII 33 ao 126, exceto números e símbolos).
*/

#include <stdio.h>

int main(){
    char c;

    printf("Enter a Character:\n>");
    scanf("%c", &c);

    if ((65 <= c && c < 90)||(97 <= c && c < 122)){
        if (c==65||c==69||c==73||c==79||c==85 || c==97||c==101||c==105||c==111||c==117) printf("Vowel");
        else printf("Consonant");
    }
    else if (33 <= c && c < 126) printf("Number");
    else printf("Symbol\n");

    return 0;
}

//github.com/tiagodefendi
