
#include <stdio.h>

void print_box(int lin, int col){
    for (int i = 0; i< lin; i++){
        for (int j = 0; j < col; j++){
            printf("🧱");
            }
        printf("\n");
    }
}

void print_triangle(int lin){
    for (int i = 0; i< lin; i++){
        for (int j = 0; j <= i; j++){
            printf("🧱");
            }
        printf("\n");
    }
}

void print_right_triangle(int lin){
    for (int i=0, k=lin-2; i< lin; i++,k--){
        for (int j = 0; j <= k; j++){
            printf("  ");
        }
        for (int j = 0; j <= i; j++){
            printf("🧱");
            }
        printf("\n");
    }
}

/*
void print_centered_triangle(int lin){
    for (int i=0, k=lin-2; i< lin; i++,k--){
        for (int j = 0; j <= k; j++){
            printf("  ");
        }
        for (int j = 0; j <= i; j++){
            printf("🧱");
            }
        printf("\n");
    }
}
*/



int main(){
/*
    int i = 0;
    while (i < 10){
        printf("%d ",i+1);
        i ++;
    }
    printf("\n");
*/

//atalho para o while
    for (int i=0, j=10; i < 10; i++,j--){
        printf("\033[32mi: %d\033[m - \033[31mj: %d\033[m | ", i+1, j);
    }
    printf("\n");

//sombrear variáveis
    {
        int a = 0;
        {
            int a = 1;
            printf("%d\n",a);
        }
        printf("%d\n",a);
    }

    print_box(4, 3);
    print_triangle(4);
    print_right_triangle(4);

    return 0;
}

//github.com/tiagodefendi
