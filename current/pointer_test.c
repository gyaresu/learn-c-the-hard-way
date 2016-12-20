#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 1;
    float b = 10.43;
    char c = 'c';
    char *d[3] = { "First", "Second", "Third"};
    
    int *aa = &a;

    printf("  a: %i\n", a );
    printf("  b: %f\n", b);
    printf("  c: %c\n", c);
    printf("  d: %pn\n", &d);
    printf(" &d: %pn\n\n", &d);

    printf(" &a: %pn\n", &a);
    printf("*aa: %d\n", *aa);
    printf("&aa: %pn\n", &aa);

    return 0;
}
