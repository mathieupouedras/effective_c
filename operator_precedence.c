#include <stdio.h>

int main(void) {

    char abc[] = "abc";
    char xyz[] = "xyz";
    
    char *p = abc;

    printf("%c\n", ++*p);

    p = xyz;

    printf("%c\n", *p++);

    return 0;
}