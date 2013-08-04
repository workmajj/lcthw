#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1) {
        printf("Zero arguments given.\n");
    }
    else if (argc == 2) {
        printf("You only have one argument.\n");
    }
    else if (argc > 2 && argc < 4) {
        printf("Here are your arguments: ");
        for (i = 1; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    }
    else {
        printf("You have too many arguments.\n");
    }

    return 0;
}
