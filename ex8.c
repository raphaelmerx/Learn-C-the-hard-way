#include <stdio.h>

int main(int argc, char *argv[]) {
    char list_names[] = {'w', 'a', 'p'};
    // string that's missing the '\0' terminating character 
    int area[] = {3, 93, 62};
    char name[] = "wap";

    printf("area[1] is: %d\n", area[1]);
    printf("Size of the area: %lu\n", sizeof(area));
    area[1] = name[2];
    printf("area[1] is: %c\n", area[1]);
    printf("Size of the area: %lu\n\n", sizeof(area));


    printf("name[1] is: %c\n", name[1]);
    printf("Size of the name: %lu\n", sizeof(name));
    name[1] = 322;
    printf("name[1] is: %d\n", name[1]);
    printf("Size of the name: %lu\n", sizeof(name));
    printf("name string is: %s\n", name);
    printf("name[1] is: %d\n\n", name[1]);

    // sizeof is an unsigned long. compiler complains if %d
    printf("Size of the area: %lu\n", sizeof(area));
    printf("Size of the name: %lu\n", sizeof(name));
    printf("Size of the list_names: %lu\n\n", sizeof(list_names));

    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of char: %lu\n", sizeof(char));
    printf("Size of long: %lu\n", sizeof(long));

    return 0;
}
