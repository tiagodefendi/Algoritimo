/*
Class about Types in C
Int
Long
Short
Unsigned
Signed
Float - 6
Double - 15
Char
*/

#include <stdio.h>
#include <limits.h>
#define PI 3.14

int main(){

    unsigned char a = 98;
    char b = 'm';

    printf("a: %c\n", a);
    printf("b: %d\n", b);

    //CHAR_MIN;
    //CHAR_MAX;

    //const float pi = 3.14;
    //PI;

    short c = -10;
    printf("signed: %hd\n", c);
    printf("signed: %hu\n", c);

    float g = 4.32;
    int nim = (int)g;

    //int(input("message"))
    int j;
    int h;
    printf("Choose 2 integer numbers: ");
    scanf(" %c %c",&j,&h);
    printf("a: %c, b:%c",j,h);

    return 0;
}

//github.com/tiagodefendi
