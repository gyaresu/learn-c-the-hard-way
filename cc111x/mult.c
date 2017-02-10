#include <math.h>
#include <stdio.h>

#define MHZ 26
#define FREQ 390000000
#define u32 unsigned long int
char FREQ2 = 0xAA;
char a = 'b';

void test(char *F)
{
    *F = *F + 63;
}

int main(void)
{

    float freqMult = (0x10000 / 1000000.0) / MHZ;
    u32 num = FREQ * freqMult; 
    printf("freqMult = %f\n", freqMult);
    printf("sizeof(freqMult) = %lu\n", sizeof(freqMult));
    printf("sizeof(num) = %lu\n", sizeof(num));
    printf("num = %lu\n", num);
    printf("sizeof(FREQ2) = %lu\n", sizeof(FREQ2));
    printf("sizeof(char) = %lu\n", sizeof(char));
    printf("FREQ2 = %x\n", FREQ2);
    printf("FREQ2 = %#x\n", FREQ2);
    printf("&FREQ2 = %s\n", &FREQ2);
    printf("a = %c\n", a);
    test(&FREQ2);
    test(&a);
    printf("FREQ2 = %#x\n", FREQ2);
    printf("a = %#x\n", a);
    
}
