#include <stdio.h>

int main(void) {

    int i = 17;
    int *ip = &i;

    ip = &*ip;

    printf("%d\n", *ip);

    return 0;
}