#include <stddef.h>
#include <stdio.h>
#include <limits.h>


int main(void) {
    int age = 48;
    int size_age = sizeof(age);
    int size_int = sizeof(int);
    printf("%d\n", size_age);
    printf("%d\n", size_int * CHAR_BIT);
}
