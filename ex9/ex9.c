#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[5] = {0};
    char name[5] = {'a'};

    // first, print them out raw
    printf("numbers: %d %d %d %d\n",
        numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c %c\n",
        name[0], name[1], name[2], name[3], name[4]);
    printf("name: %s\n", name);

    // set up the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // set up the name
    name[0] = 'J';
    name[1] = 'o';
    name[2] = 'h';
    name[3] = 'n';
    name[4] = '\0';

    // then print them out initialized
    printf("numbers: %d %d %d %d\n",
        numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n",
        name[0], name[1], name[2], name[3]);

    // print the name like a string
    printf("name: %s\n", name);

    // another way to use name
    char *another = "foo";
    printf("another: %s\n", another);
    printf("another each: %c %c %c\n",
        another[0], another[1], another[2]);

    return 0;
}
