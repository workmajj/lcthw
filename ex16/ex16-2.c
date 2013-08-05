#include <stdio.h>
#include <assert.h> // assert
#include <stdlib.h> // malloc
#include <string.h> // strdup

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct Person Person_create(char *n, int a, int h, int w)
{
    struct Person p;

    p.name = n;
    p.age = a;
    p.height = h;
    p.weight = w;

    return p;
}

void Person_print(struct Person p)
{
    printf("Name: %s\n", p.name);
    printf("\tAge: %d\n", p.age);
    printf("\tHeight: %d\n", p.height);
    printf("\tWeight: %d\n", p.weight);
}

int main(int argc, char *argv[])
{
    printf("sizeof(struct Person) is %ld.\n", sizeof(struct Person));
    printf("sizeof char* is %ld; int is %ld.\n", sizeof(char*), sizeof(int));
    printf("1 char* + 3 int = %ld.\n\n", sizeof(char*) + (3 * sizeof(int)));

    struct Person mike = Person_create("Mike", 28, 70, 192);
    Person_print(mike);

    mike.age += 20;
    mike.height -= 2;
    mike.weight += 10;
    Person_print(mike);

    return 0;
}
