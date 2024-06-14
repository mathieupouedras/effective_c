#include <stdio.h>
static int counter = 0;

void increment(void) {
    counter++;
    printf("%d\n", counter);
}

int retrieve(void) {
    return counter;
}

int main(void) {
    for (int i = 0; i < 5;  i++) {
        printf("%d\n", retrieve());
        increment();
    }
    return 0;
}