#include <stdio.h>

// http://www.learn-c.org/en/Function_arguments_by_reference

typedef struct {
    int x;
    int y;
} point;

void move(point * p) {
    (*p).x++;
    (*p).y++;
}

void deconst(point *p) {
    p->x++;
    p->y++;
}

int main() {
    point a_point;

    a_point.x = 10;
    a_point.y = 20;

    point dec;

    dec.x = 30;
    dec.y = 50;
    
    void deconst(point * p);

    deconst(&dec);
    
    void move(point * p);

    move(&a_point);
    move(&a_point);
    move(&a_point);
    move(&a_point);

    printf("a_point.x = %i\n", a_point.x);
    printf("a_point.y = %i\n", a_point.y);
    printf("dec.x = %i\n", dec.x);
    printf("dec.y = %i\n", dec.y);
return 0;
}
