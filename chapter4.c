#include <stdio.h>
#include <limits.h>

void inc(int *a) {
    int r = *a;
    r = r + 1;
    *a = r;
}

int addOne(int a) {
    return a + 1;
}

int addTen(int a) {
    return a + 10;
}

// equivalend declacraiton calc(int func(int), int p)
int calc(int (*func)(int), int p) {
    return func(p);
}

int main(void ) {
    int j = calc(addTen, 48);
    printf("%d\n", j);


    return 0;
}