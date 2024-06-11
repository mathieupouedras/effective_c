#include <stdio.h>
#include <string.h>

int main(void) {
    struct {
        int age;
        char name[100];
    } person, *p_person;

    person.age = 3;
    strcpy(person.name, "Lila");
    printf("%d\n", person.age);
    printf("%s\n", person.name);

    p_person = &person;

    p_person->age = 4;
    printf("%d\n", person.age);
}