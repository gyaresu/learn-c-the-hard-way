#include <stdio.h>

int main(int argc, char *argv[])
{
//    char *list[3] = {"Thing", "Stuff", "Wooble"};
//
//    int i = 0;
//    int count = sizeof(list) / sizeof(list[0]);
//
//    for (i = 0; i < count; i++) {
//        printf("%i from list is %s\n", i, list[i]);
//        printf("Count is %d, i is %i.\n", count, i);
//    }
//
//    for (i = 1; i < argc; i++) {
//        printf("Argument %i is %s\n", i, argv[i]);
//    }

    int a = 42;
    int *b = &a;
    double c = sizeof(b);

    printf("int i   == %i\n", a);
    printf("int &i  == %pn\n", &a);
    printf("int b   == %pn\n", b);
    printf("int b+1 == %pn\n", b+1);
    printf("int b+2 == %pn\n", b+2);
    printf("int b+3 == %pn\n\n", b+3);
    printf("int &b == %pn\n\n", &b);

    printf("sizeof(a) is %lu\n", sizeof(a));
    printf("sizeof(&a) is %lu\n", sizeof(&a));
    printf("sizeof(b) is %lu\n", sizeof(b));
    printf("sizeof(b+1) is %lu\n\n", sizeof(b+1));

    printf("double c is %f\n", c);

    return 0;
}

