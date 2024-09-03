#include <math.h>
#include <stdio.h>

int glob;

int max(int a, int b) {
    return a < b ? b: a;
}

int f(void) {
    return glob + 10;
}

int g(void) {
    glob = 42;
    return glob;
}

int main(void) {
    int max_value = max(f(), g());
    printf("%d", max_value);

}