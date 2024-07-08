#include <stdio.h>
#include <limits.h>

int main(void) {

    signed short int s = -25; 

    s = -s;

    printf("%d\n", s);

    s = SCHAR_MIN;
    s =  - (signed short int) s;

    printf("%d\n", s);
    return 0;
}