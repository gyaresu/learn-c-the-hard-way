#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(int chlen, char arg[]);

void print_arguments(int argc, char *argv[]) {
    int i = 0;
    int chlen = 0;

    for (i = 0; i < argc; ++i) {
        chlen = strlen(argv[i]);
        print_letters(chlen, argv[i]);
    }
}

void print_letters(int chlen, char arg[]) {
    int i = 0;

    for (i = 0; i < chlen; ++i) {
        char ch = arg[i];

        if (isalpha(ch) || isblank(ch)) {
            printf("'%c' == %d ", ch, ch);
        }
    }

    printf("\n");
}

int main(int argc, char *argv[]) {
    print_arguments(argc, argv);
    return 0;
}
