#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 5678.4532;
    char initial = 'J';
    char first_name[] = "John";
    char last_name[] = "Workman";
    int ans = 42;

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);
    printf("I have a last name %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);
    printf("Answer in hex is %x.\n", ans);
    printf("Answer in octal is %o.\n", ans);

    return 0;
}
