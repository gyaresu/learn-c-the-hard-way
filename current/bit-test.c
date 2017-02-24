#include <stdio.h>

#define u8 unsigned char
#define u16 unsigned int
#define u32 unsigned long int
#define HIBYTE(a) (u8) ((u16)(a) >> 8)
#define LOBYTE(a)     (u8)  (u16)(a)
#define SET_WORD(regH, regL, word) \
	do {                           \
		(regH) = HIBYTE( word );   \
		(regL) = LOBYTE( word );   \
	} while (0)

#define LEN 29

typedef struct {
    u8 LENH :5;
    u8 LENL :8;
} HILO;

HILO h;

int main(void) {
    
    SET_WORD(h.LENH, h.LENL, LEN);
    printf("h.LENH = %cu\n", h.LENH);
    printf("h.LENH = %cu\n", h.LENL);
    return 0;
}
