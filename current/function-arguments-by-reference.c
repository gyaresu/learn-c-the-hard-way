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

int main() {
    point a_point;

    a_point.x = 10;
    a_point.y = 20;
    
    
    
    void move(point * p);

    move(&a_point);

    printf("p.x = %i\n", a_point.x);
    printf("p.y = %i\n", a_point.y);
return 0;
}
