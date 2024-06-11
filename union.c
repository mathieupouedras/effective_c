#include <stdio.h>

int main(void) {
    union {
        int duration_type;
        int duration;
    } age, * age_p;

    age.duration_type = 1;
    age.duration = 2;

    printf("%d\n", age.duration);

    age.duration = 4;
    age_p = &age;
    printf("%d\n", age_p->duration);
    return 0;

}