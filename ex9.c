#include <stdio.h>

int main(int argc, char *argv[]) {
    int numbers[4] = {0};
    // inserts 3 \0 after the 'a'. The first \0 terminates the string
    char name[4] = {'a'};

    printf("name is: %s\n", name);

    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';
    printf("name is: %s\n", name);

    name[3] = 'x';
    printf("name is: %s\n", name);

    return 0;
}
