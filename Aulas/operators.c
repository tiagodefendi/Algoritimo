/*
Arithmetic Operators
+
-
*
/
%
++
--

Relational Operators
==
!=
>
>=
<
<=

Logical Operators
&& - and
|| - or
!  - not
*/

#include <stdio.h>

int main(){
    int a;
    int b;

    printf("Choose 2 integer numbers:\n");
    scanf(" %d", &a);
    scanf(" %d", &b);

    a++;
    b--;

    printf("a: %d, b: %d\n",a,b);
    printf("a/b: %f\n", (float)(a/b));
    printf("a/b: %f\n", (float)a/b);
    printf("a/b: %f\n", a/(float)b);

    if (a == 2 && b == 10){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}

//github.com/tiagodefendi
