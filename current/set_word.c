#include <stdio.h>

int main(void) {

    typedef struct {
        unsigned char a : 5;
        unsigned char b : 8;
        unsigned char c : 8;
    } SETUP;

    SETUP s;

    s.a = (unsigned char) (unsigned int)(29);
    printf("s.a is %i\n", s.a);
    s.b = (unsigned char) (unsigned int)(29);
    printf("s.b is %cu\n", s.b);
    s.c = (unsigned int)(29);
    printf("s.c is %cu\n", s.c);
}
