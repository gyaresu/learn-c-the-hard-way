#include <stdio.h>
#include <string.h>

#define u8  unsigned char
#define u16 unsigned int

struct tags {
    size_t name;
    u16 tag_number;
    u16 tag_id;
};

typedef struct tags Tags;

int get_tag_id(Tags t);
u8 tag_name(Tags t);


int main(int argc, char *argv[])
{
    Tags bob = {"Bob", 42, 1337};

    printf("Tag name is %c", tag_name(bob));

}


