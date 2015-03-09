#include <stdio.h>

int main(int argc, char *argv[]) {
    char *names[] = {"bob", "albert", "nora"};

    for (int i=0; i<3; i++) {
        printf("current name is: %s\n", names[i]);
    }

    for (int i=0; i<argc; i++) {
        printf("arg is: %s\n", argv[i]);
    }

    return 0;
}
