#include <stdio.h>

int main(void) {
    printf("\c");
}

/* gcc ex-1-2.c -o ex-1-2
ex-1-2.c: In function ‘main’:
ex-1-2.c:4:16: warning: unknown escape sequence: '\c'
    4 |     printf("\c");
      | */

//this above line will be the output
