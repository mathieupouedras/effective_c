#include <stdio.h>

int main(void) {
    char arr[3];
    arr[0] = 'A';
    *(arr + 1) = 'B';
    arr[2] = 'C';

    puts(arr);

    return 0;
}