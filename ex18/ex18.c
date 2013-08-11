#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void die (const char *message) {
    if (errno) perror(message);
    else printf("ERROR: %s\n", message);
    exit(1);
}

typedef int (*compare_cb)(int a, int b);

int *bubble_sort(int *numbers, int count, compare_cb cmp) {
    int i = 0, j = 0, tmp = 0;

    int *target = malloc(count * sizeof(int));
    if (target == NULL) die("Memory error.");

    memcpy(target, numbers, count * sizeof(int));

    for (i = 0; i < count; i++) {
        for (j = 0; j < count - 1; j++) {
            if (cmp(target[j], target[j+1]) > 0) {
                tmp = target[j + 1];
                target[j + 1] = target[j];
                target[j] = tmp;
            }
        }
    }

    return target;
}

int sorted_order(int a, int b) {
    return a - b;
}

int reverse_order(int a, int b) {
    return b - a;
}

int strange_order(int a, int b) {
    if (a == 0 || b == 0) return 0;
    else return a % b;
}

void test_sorting(int *numbers, int count, compare_cb cmp) {
    int i = 0;

    int *sorted = bubble_sort(numbers, count, cmp);
    if (sorted == NULL) die("Failed to sort");

    for (i = 0; i < count; i++) {
        printf("%d ", sorted[i]);
    }
    printf("\n");

    free(sorted);

    unsigned char *data = (unsigned char *)cmp;
    for (i = 0; i < 25; i++) {
        printf("%02x:", data[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) die("USAGE: ./ex18 4 3 1 5 6");

    int count = argc - 1;
    int i = 0;
    char **inputs = argv + 1;

    int *numbers = malloc(count * sizeof(int));
    if (numbers == NULL) die("Memory error.");

    for (i = 0; i < count; i++) {
        numbers[i] = atoi(inputs[i]);
    }

    test_sorting(numbers, count, sorted_order);
    test_sorting(numbers, count, reverse_order);
    test_sorting(numbers, count, strange_order);

    free(numbers);

    return 0;
}
