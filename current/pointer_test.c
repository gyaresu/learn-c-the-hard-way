#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 42;
    float b = 10.43;
    char c = 'c';
    char *d[3] = { "First", "Second", "Third"};
    
    int *aa = &a;
    float *bb = &b;

    float e = a + b;
    float f = *aa + *bb;
    float *g = &f;

    printf("  b: %f\n", b);
    printf("  bb: %pn\n", bb);
    printf("  *bb: %f\n", *bb);
    printf("  c: %c\n", c);
    printf(" d: %pn\n", d);
    printf(" &d: %pn\n\n", &d);

    printf("%%i of  a: %i\n", a);
    printf("%%pn of  &a: %pn\n", &a);
    printf("%%i  of *aa: %i\n", *aa);
    printf("%%pn of &aa: %pn\n", &aa);
    printf("%%pn of aa: %pn\n\n", aa);

    printf("  e: %f\n", e);
    printf("  f: %f\n", f);
    printf("  %%pn of  g: %pn\n", g);
    printf("  %%f  of *g: %f\n", *g);
    printf("  %%pn of &g: %pn\n\n", &g);

    printf("  sizeof(e): %lu\n", sizeof(e));
    printf("  sizeof(f): %lu\n", sizeof(f));
    printf("  sizeof(&f): %lu\n", sizeof(&f));
    printf("  sizeof(g): %lu\n", sizeof(g));

    return 0;
}
