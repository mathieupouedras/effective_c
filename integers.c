#include <limits.h>
#include <stdio.h>

int main(void) {
    unsigned char max = UCHAR_MAX;
    if ((unsigned char) (max + 1) > UCHAR_MAX) {
        printf("%s\n", "cannot increment");
    }
    else {
        max ++;
    }

    printf("%d\n", max);

    max = UCHAR_MAX;
    if (UCHAR_MAX - max > 0) {
        max++;
    }

    printf("%d\n", max);

    return 0;

}