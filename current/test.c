#include <stdint.h>
#include <stdio.h>

uint8_t SLEEP = 0xBE;
uint8_t SLEEP_OSC_PD = 0x04;

int main(int argc, char *argv[])
{
    int a = 42;
    int *b = &a;
    double c = sizeof(b);

    struct stuff {
        float a;
        float b;
        //uint8_t *c;
        char *c;
    };

    struct stuff thing = {2,3,"abcdef"};

    printf("SLEEP is %x\n", SLEEP);
    SLEEP &= ~SLEEP_OSC_PD;
    printf("SLEEP is %x\n", SLEEP);

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
    
    printf("thing.a is %f\n", thing.a);
    printf("thing.b is %f\n", thing.b);
    printf("thing.c is %s\n", thing.c);
    printf("&thing.c is %pn\n", &thing.c);

    return 0;
}

