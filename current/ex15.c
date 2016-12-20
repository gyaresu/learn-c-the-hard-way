#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
//    int ages[] = {23, 43, 12, 89, 2 };
    char bob[] = "bob";
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // Both the address and pointer are different every time you run the programme
    // names and &names are the same thing (but still different every time)
    printf("Address of names array: %pn\n", names);
    printf("Address of names array: %pn\n", &names);
    printf("Pointer of names array: %pn\n", *names);
    printf("Size of names: %lu\n", sizeof(names));
    printf("Size of names[0]: %lu\n", sizeof(names[0]));
    printf("Size of names[0][0]: %lu\n", sizeof(names[0][0]));
    printf("names[0][0]: %c\n", names[0][0]);
    // This returns 'A'
    printf("*names[0] ==  %c\n", *names[0]);
    // This return 'Alan'
    printf("names[0] ==  %s\n", names[0]);
    printf("bob == %s\n", bob);
    printf("&bob == %pn\n", &bob);
    printf("bob[0] == %c\n", bob[0]);
    printf("bob[1] == %c\n", bob[1]);
    printf("bob[2] == %c\n", bob[2]);
    printf("bob[3] == %c\n", bob[3]);

    // safely get the size of ages
//    int count = sizeof(ages) / sizeof(int);
//    int i = 0;
//
//    // first way using indexing
//    for (i = 0; i < count; i++) {
//        printf("%s has %d years alive.\n", names[i], ages[i]);
//    }
//
//    printf("---\n");
//
//    // setup the pointers to the start of the arrays
//    int *cur_age = ages;
//    char **cur_name = names;
//
//    // second way using pointers
//    for (i = 0; i < count; i++) {
//        printf("%s is %d years old.\n",
//                *(cur_name+i), *(cur_age + i));
//    }
//
//    printf("---\n");
//
//    // third way, pointers are just arrays
//    for (i = 0; i < count; i++) {
//        printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
//    }
//
//    printf("---\n");
//
//    // fourth way with pointers in a stupid complex way
//    for (cur_name = names, cur_age = ages;
//            (cur_age - ages) < count; cur_name++, cur_age++ ) {
//            printf("%s lived %d years so far.\n", *cur_name, *cur_age);
//    }

    return 0;

}
