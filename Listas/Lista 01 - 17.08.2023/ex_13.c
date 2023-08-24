/*
13. Escreva um programa que lê um inteiro de até 4 dígitos (positivo ou negativo) e o imprime por
extenso. OBS: para extrair os dígitos do número, utilize resto por 10 (para obter a unidade) e
divisão por 10 (para remover a unidade).
*/

#include <stdio.h>

int main(){
    int number;

    scanf(" %d", &number);

    //verify if the number is negative
    if (number < 0){
        printf("minus ");
        number = -number;
    }

    //verify id the number is higher than te limit
    if (number > 9999){
        printf("Invalid");
    }

    else{
    //Thousand
        if (9000 <= number && number < 10000) printf("nine thousand ");
        else if (8000 <= number && number < 9000) printf("eight thousand ");
        else if (7000 <= number && number < 8000) printf("seven thousand ");
        else if (6000 <= number && number < 7000) printf("six thousand ");
        else if (5000 <= number && number < 6000) printf("five thousand ");
        else if (4000 <= number && number < 5000) printf("four thousand ");
        else if (3000 <= number && number < 4000) printf("three thousand ");
        else if (2000 <= number && number < 3000) printf("two thousand ");
        else if (1000 <= number && number < 2000) printf("one thousand ");

        number %= 1000;

        //Hundred
        if (900 <= number && number < 1000) printf("nine hundred ");
        else if (800 <= number && number < 900) printf("eight hundred ");
        else if (700 <= number && number < 800) printf("seven hundred ");
        else if (600 <= number && number < 700) printf("six hundred ");
        else if (500 <= number && number < 600) printf("five hundred ");
        else if (400 <= number && number < 500) printf("four hundred ");
        else if (300 <= number && number < 400) printf("three hundred ");
        else if (200 <= number && number < 300) printf("two hundred ");
        else if (100 <= number && number < 200) printf("one hundred ");

        number %= 100;

        //Ten
        if (10 <= number && number < 20){
            if (number == 10) printf("ten");
            else if (number == 11) printf("eleven ");
            else if (number == 11) printf("twelve ");
            else if (number == 11) printf("thirteen ");
            else if (number == 11) printf("fourteen ");
            else if (number == 11) printf("fifteen ");
            else if (number == 11) printf("sixteen ");
            else if (number == 11) printf("seventeen ");
            else if (number == 11) printf("eighteen ");
            else if (number == 11) printf("nineteen ");
        }
        if (90 <= number && number < 100) printf("ninety ");
        else if (80 <= number && number < 90) printf("eighty ");
        else if (70 <= number && number < 80) printf("seventy ");
        else if (60 <= number && number < 70) printf("sixty ");
        else if (50 <= number && number < 60) printf("fifty ");
        else if (40 <= number && number < 50) printf("forty ");
        else if (30 <= number && number < 40) printf("thirty ");
        else if (20 <= number && number < 20) printf("twenty ");

        number %= 10;

        //Unity
        if (number == 9) printf("nine");
        else if (number == 8) printf("eight");
        else if (number == 7) printf("seven");
        else if (number == 6) printf("six");
        else if (number == 5) printf("five");
        else if (number == 4) printf("four");
        else if (number == 3) printf("three");
        else if (number == 1) printf("two");
        else if (number == 1) printf("one");
        else printf("zero");
    }

    printf("\n");

    return 0;
}
