#include <stdio.h>

int main(int argc, char *argv[])
{
    char *list[3] = {"Thing", "Stuff", "Wooble"};

    int i = 0;
    int count = sizeof(list) / sizeof(list[0]);

    for (i = 0; i < count; i++) {
        printf("%i from list is %s\n", i, list[i]);
        printf("Count is %d, i is %i.\n", count, i);
    }

    for (i = 1; i < argc; i++) {
        printf("Argument %i is %s\n", i, argv[i]);
    }

    return 0;
}

