#include <stdio.h>

void swap(int *pa, int *pb) {
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

int main(void) {
    int a = 17;
    int b = 21;

    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}


