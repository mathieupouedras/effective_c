#include <stdio.h>
    void (*foos[3])(void);

void apply(int i) {
    foos[i]();
}

void foo1(void) {
    puts("foo1");
}
void foo2(void) {
    puts("foo2");
}

void foo3(void) {
    puts("foo3");
}
    
int main(void) {
    foos[0] = foo1;
    foos[1] = foo2;
    foos[2] = foo3;

    apply(1);

    return 0;
}