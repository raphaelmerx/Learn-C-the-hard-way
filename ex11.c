#include <stdio.h>

int main(int argc, char *argv[]) {

    char *states[argc];

    int i = argc - 1;
    while(i>=0) {
        states[i] = argv[i];
        printf("passed: %s\n", states[i]);
        i--;
    }

    return 0;
}
